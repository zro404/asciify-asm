macro print text, len
{
    push rax
    push rdi
    push rsi
    push rdx

    mov rax, 1
    mov rdi, 1
    mov rsi, text
    mov rdx, len
    syscall

    pop rdx
    pop rsi
    pop rdi
    pop rax
}
