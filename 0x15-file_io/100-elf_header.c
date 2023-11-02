#include "main.h"

/**
 * display_elf_header - Display information from the ELF header.
 * @ehdr: The ELF header structure.
 */
void display_elf_header(Elf64_Ehdr *ehdr) {
	int i;
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", ehdr->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             %s\n", ehdr->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "2's complement, big-endian");
	printf("  Version:                           %d (current)\n", ehdr->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", ehdr->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", ehdr->e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
	printf("  Entry point address:               0x%lx\n", (unsigned long)ehdr->e_entry);
}

int main(int argc, char *argv[]) {
	int fd;
	Elf64_Ehdr ehdr;

	if (argc != 2) {
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}

	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr)) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 ||
	    ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
	    ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
	    ehdr.e_ident[EI_MAG3] != ELFMAG3) {
		dprintf(STDERR_FILENO, "Error: Not an ELF file: %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	display_elf_header(&ehdr);
	close(fd);

	return 0;
}
