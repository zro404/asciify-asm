format elf64 executable
entry main

include "io.inc"

hw:
    db "Hello, World!", 0ah

main:
    print hw, 14

exit:
    mov rax, 60
    mov rdi, 0
    syscall
    hlt
