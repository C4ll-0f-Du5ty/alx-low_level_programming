section .data
    format db "Hello, Holberton", 10, 0  ; Message format string with newline and null terminator

section .text
    global main
    extern printf

main:
	mov		edi, msg
	mov		eax, 0
	call	printf
