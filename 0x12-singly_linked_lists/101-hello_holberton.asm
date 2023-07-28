section .data
	msg db 'Hello, Holberton', 10, 0
	fmt db "%s", 0

section .text
	extern printf
	global main

main:
	mov rdi, fmt ; Move format string into rdi
	mov rsi, msg ; Move message string into rsi
	xor eax, eax ; Clear eax register
	call printf

	mov eax, 60
	xor edi, edi
	syscall
