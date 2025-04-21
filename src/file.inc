macro fread fdbuf, textbuf
{
    push rax
    push rdi
    push rsi
    push rdx

    mov rax, 0
    mov rdi, [img]
    mov rsi, textbuf
    mov rdx, 256
    syscall

    pop rdx
    pop rsi
    pop rdi
    pop rax
}
