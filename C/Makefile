CC = gcc

arg_node:	arg_node.o	test_arg_node.o
	${CC} test_arg_node.o arg_node.o -o test_arg_node
test_arg_node.o:	test_arg_node.c	arg_node.h
	${CC} test_arg_node.c -c
arg_node.o:	arg_node.c	arg_node.h
	${CC} arg_node.c -c
clean:
	@rm -rf *.o
	