all:
	gcc -o test test.c
	gcc -o test_macro test_macro.c
	gcc -o test_macro.E -E test_macro.c
	gcc -o test_stack test_stack.c
	gcc -o saiki saiki.c
	gcc -o if if.c
	gcc -o loop loop.c
	gcc -o goto goto.c
	gcc -o openclose openclose.c
	gcc -o dowhile dowhile.c
	gcc -o dowhile.E -E dowhile.c
	gcc -o notdowhile.E -E notdowhile.c
	gcc -o structure structure.c
	gcc -o symbol symbol.c
	gcc -o badgoto badgoto.c
	gcc -o badgoto2 badgoto2.c
	gcc -o nisegets nisegets.c
clean:
	rm test test_macro test_stack saiki if goto structure badgoto badgoto2 nisegets loop test_macro.E dowhile dowhile.E notdowhile.E openclose symbol
