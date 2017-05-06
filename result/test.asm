FUNC @main:
	var a
	push 6.5
	pop a



	push 7
	pop a

	push sum
	pop a

	push a
	print "a  = %f"

_begIf_1:
	push 1
	jz _elIf_1
Error at line 26:
	syntax error
