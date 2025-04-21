format elf64 executable
entry main

include "io.inc"
include "file.inc"

img:
    db 0

buffer:
    times 256 db 0

main:
    ;; Read File
    mov rax, 2
    mov rdi, [rsp+16]
    mov rsi, 0
    mov rdx, 0
    syscall

    mov [img], rax


    fread img, buffer
    print buffer, 20

exit:
    mov rax, 60
    mov rdi, 0
    syscall
    hlt
