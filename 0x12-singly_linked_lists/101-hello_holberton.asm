section .data
    format db "Hello, Holberton", 10, 0  ; Message format string with newline and null terminator

section .text
    global main
    extern printf

main:
	push rdi                ; Preserve registers
	mov rdi, format         ; Load the address of the format string
	call printf            ; Call the printf function
	pop rdi                 ; Restore registers
	ret
