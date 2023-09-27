	.file	"DMA.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "********************\0"
LC1:
	.ascii "* malloc Function  *\0"
	.align 4
LC2:
	.ascii "Please Enter Number Of Values : \0"
LC3:
	.ascii "%d\0"
LC4:
	.ascii "Befor Give Initlization :\0"
LC5:
	.ascii "Please Enter Number %d : \0"
LC6:
	.ascii "%d\12\0"
LC7:
	.ascii "During Give Initlization :\0"
LC8:
	.ascii "Befor Make Free :\0"
LC9:
	.ascii "After Make Free :\0"
LC10:
	.ascii "* calloc Function  *\0"
LC11:
	.ascii "* realloc Function  *\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_puts
	movl	$LC1, (%esp)
	call	_puts
	movl	$LC0, (%esp)
	call	_puts
	movl	$LC2, (%esp)
	call	_printf
	leal	19(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_scanf
	movzbl	19(%esp), %eax
	movzbl	%al, %eax
	movl	%eax, (%esp)
	call	_malloc
	movl	%eax, 24(%esp)
	movl	$LC4, (%esp)
	call	_puts
	movb	$0, 31(%esp)
	jmp	L2
L3:
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movzbl	31(%esp), %edx
	movl	24(%esp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movzbl	%al, %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movb	%al, 31(%esp)
L2:
	movzbl	19(%esp), %eax
	cmpb	%al, 31(%esp)
	jb	L3
	movl	$LC7, (%esp)
	call	_puts
	movb	$0, 31(%esp)
	jmp	L4
L5:
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movzbl	31(%esp), %edx
	movl	24(%esp), %eax
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_scanf
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movb	%al, 31(%esp)
L4:
	movzbl	19(%esp), %eax
	cmpb	%al, 31(%esp)
	jb	L5
	movl	$LC8, (%esp)
	call	_puts
	movb	$0, 31(%esp)
	jmp	L6
L7:
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movzbl	31(%esp), %edx
	movl	24(%esp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movzbl	%al, %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movb	%al, 31(%esp)
L6:
	movzbl	19(%esp), %eax
	cmpb	%al, 31(%esp)
	jb	L7
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	_free
	movl	$LC9, (%esp)
	call	_puts
	movb	$0, 31(%esp)
	jmp	L8
L9:
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movzbl	31(%esp), %edx
	movl	24(%esp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movzbl	%al, %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movb	%al, 31(%esp)
L8:
	movzbl	19(%esp), %eax
	cmpb	%al, 31(%esp)
	jb	L9
	movl	$LC0, (%esp)
	call	_puts
	movl	$LC10, (%esp)
	call	_puts
	movl	$LC0, (%esp)
	call	_puts
	movl	$LC2, (%esp)
	call	_printf
	leal	18(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_scanf
	movzbl	18(%esp), %eax
	movzbl	%al, %eax
	movl	$1, 4(%esp)
	movl	%eax, (%esp)
	call	_calloc
	movl	%eax, 20(%esp)
	movl	$LC4, (%esp)
	call	_puts
	movb	$0, 31(%esp)
	jmp	L10
L11:
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movzbl	31(%esp), %edx
	movl	20(%esp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movzbl	%al, %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movb	%al, 31(%esp)
L10:
	movzbl	18(%esp), %eax
	cmpb	%al, 31(%esp)
	jb	L11
	movl	$LC7, (%esp)
	call	_puts
	movb	$0, 31(%esp)
	jmp	L12
L13:
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movzbl	31(%esp), %edx
	movl	20(%esp), %eax
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_scanf
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movb	%al, 31(%esp)
L12:
	movzbl	18(%esp), %eax
	cmpb	%al, 31(%esp)
	jb	L13
	movl	$LC8, (%esp)
	call	_puts
	movb	$0, 31(%esp)
	jmp	L14
L15:
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movzbl	31(%esp), %edx
	movl	20(%esp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movzbl	%al, %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movb	%al, 31(%esp)
L14:
	movzbl	18(%esp), %eax
	cmpb	%al, 31(%esp)
	jb	L15
	movl	20(%esp), %eax
	movl	%eax, (%esp)
	call	_free
	movl	$LC9, (%esp)
	call	_puts
	movb	$0, 31(%esp)
	jmp	L16
L17:
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movzbl	31(%esp), %edx
	movl	20(%esp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movzbl	%al, %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movb	%al, 31(%esp)
L16:
	movzbl	18(%esp), %eax
	cmpb	%al, 31(%esp)
	jb	L17
	movl	$LC0, (%esp)
	call	_puts
	movl	$LC11, (%esp)
	call	_puts
	movl	$LC0, (%esp)
	call	_puts
	movl	$LC2, (%esp)
	call	_printf
	leal	17(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_scanf
	movzbl	17(%esp), %eax
	movzbl	%al, %eax
	movl	%eax, 4(%esp)
	movl	20(%esp), %eax
	movl	%eax, (%esp)
	call	_realloc
	movl	$LC4, (%esp)
	call	_puts
	movb	$0, 31(%esp)
	jmp	L18
L19:
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movzbl	31(%esp), %edx
	movl	20(%esp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movzbl	%al, %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movb	%al, 31(%esp)
L18:
	movzbl	17(%esp), %eax
	cmpb	%al, 31(%esp)
	jb	L19
	movl	$LC7, (%esp)
	call	_puts
	movb	$0, 31(%esp)
	jmp	L20
L21:
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movzbl	31(%esp), %edx
	movl	20(%esp), %eax
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_scanf
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movb	%al, 31(%esp)
L20:
	movzbl	17(%esp), %eax
	cmpb	%al, 31(%esp)
	jb	L21
	movl	$LC8, (%esp)
	call	_puts
	movb	$0, 31(%esp)
	jmp	L22
L23:
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movzbl	31(%esp), %edx
	movl	20(%esp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movzbl	%al, %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movb	%al, 31(%esp)
L22:
	movzbl	17(%esp), %eax
	cmpb	%al, 31(%esp)
	jb	L23
	movl	20(%esp), %eax
	movl	%eax, (%esp)
	call	_free
	movl	$LC9, (%esp)
	call	_puts
	movb	$0, 31(%esp)
	jmp	L24
L25:
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movzbl	31(%esp), %edx
	movl	20(%esp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movzbl	%al, %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	movzbl	31(%esp), %eax
	addl	$1, %eax
	movb	%al, 31(%esp)
L24:
	movzbl	17(%esp), %eax
	cmpb	%al, 31(%esp)
	jb	L25
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_malloc;	.scl	2;	.type	32;	.endef
	.def	_free;	.scl	2;	.type	32;	.endef
	.def	_calloc;	.scl	2;	.type	32;	.endef
	.def	_realloc;	.scl	2;	.type	32;	.endef
