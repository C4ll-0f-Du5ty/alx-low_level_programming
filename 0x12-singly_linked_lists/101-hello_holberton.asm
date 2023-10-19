section .data
    msg db "Hello, Holberton", 0xa, 0

section .text
    global main
    extern printf

main:
    push rdi         ; Preserve rdi
    lea rdi, [rel msg]
    call printf
    pop rdi          ; Restore rdi
    ret
