macro fopen fname fdbuf
{
    push rax
    push rdi
    push rsi
    push rdx

    mov rax, 2
    mov rdi, fname
    mov rsi, 0
    mov rdx, 0

    mov [fdbuf], rax

    pop rdx
    pop rsi
    pop rdi
    pop rax
}
