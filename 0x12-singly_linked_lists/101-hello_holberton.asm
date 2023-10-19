section .data
    hello db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    push rdi
    mov rdi, hello
    call printf
    pop rdi
    ret
