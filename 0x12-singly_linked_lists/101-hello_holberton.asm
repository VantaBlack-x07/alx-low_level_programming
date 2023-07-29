section .data
    hello: db "Hello, Holberton", 10 ; 10 is newline character

section .text
    global main

    extern printf

main:
    push    rbp
    mov     rbp, rsp

    lea     rdi, [hello]
    xor     eax, eax
    call    printf

    mov     rsp, rbp
    pop     rbp
    ret
