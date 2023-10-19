section .data
    hello_fmt db "Hello, Holberton", 0   ; The format string

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, hello_fmt       ; Load the format string into rdi
    call printf             ; Call the printf function
    add rsp, 8              ; Adjust the stack pointer
    pop rbp

    mov rax, 60             ; syscall: exit
    xor rdi, rdi            ; status: 0
    syscall
