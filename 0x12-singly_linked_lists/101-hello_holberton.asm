section .data
    msg db "Hello, Holberton", 0xa, 0

section .text
    global main
    extern printf

main:
    push rbp          ; Preserve rbp
    mov rdi, msg
    call printf
    pop rbp           ; Restore rbp
    ret

