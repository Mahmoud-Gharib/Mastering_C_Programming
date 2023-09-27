	.file	"Mahmoud_Mustafa_Gharib_S3_Ex.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Please enter the Number_1\0"
LC1:
	.ascii "%d\0"
LC2:
	.ascii "Please enter the Number_2\0"
LC3:
	.ascii "%d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	movl	$0, 36(%esp)
	movl	$LC0, (%esp)
	call	_puts
	leal	32(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$LC2, (%esp)
	call	_puts
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	32(%esp), %eax
	movl	%eax, 44(%esp)
	jmp	L2
L7:
	movl	$0, 36(%esp)
	movl	$1, 40(%esp)
	jmp	L3
L5:
	movl	44(%esp), %eax
	cltd
	idivl	40(%esp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	L4
	addl	$1, 36(%esp)
L4:
	addl	$1, 40(%esp)
L3:
	movl	40(%esp), %eax
	cmpl	44(%esp), %eax
	jle	L5
	cmpl	$2, 36(%esp)
	jne	L6
	movl	44(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
L6:
	addl	$1, 44(%esp)
L2:
	movl	28(%esp), %eax
	cmpl	%eax, 44(%esp)
	jle	L7
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
