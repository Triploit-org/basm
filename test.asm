main:
	var		x
	ptr		ax, x
	mov		100, ax
	pushv	x
	outl
	ptr		ax, ax

	mov		300, ax
	pushv	x
	outl
	pop
	push	ax
	outl

	mov 	400, ax
	mvv		ax, x
	pushv 	x
	outl

	mov 	1, ax
	mov		2, bx
	eqi		ax, bx
	rts		hx
	outl
	pop

	push	"Input: "
	mov		7, hx;
	jmp		write_string
	inp
	jmp 	write_string
	push 	10
	ptc
	pop
	hlt

write_string:
	.beg:
		ptc
		pop
		sub		1, hx

	ggn		beg
	mov		0, hx
	return
