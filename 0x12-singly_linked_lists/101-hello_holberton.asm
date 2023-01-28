	SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret
/**
 * compile with
 * nasm -f elf64 101-hello_holberton.asm
 * this will genarate an object file called 101-hello_holberton.o
 * the, compile with
 * gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
 */
