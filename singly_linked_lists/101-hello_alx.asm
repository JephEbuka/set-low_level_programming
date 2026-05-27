section .data
    msg db "Hello, ALX", 10, 0   ; string + newline + null terminator

section .text
    extern printf
    global main

main:
    push    rbp
    mov     rbp, rsp

    lea     rdi, [rel msg]
    call    printf

    mov     rsp, rbp
    pop     rbp
    xor     eax, eax
    ret
