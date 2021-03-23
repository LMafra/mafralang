CFLAGS	= -g -Wall -pedantic -x c
CC		= gcc

mafralang:
		$(CC) $(CFLAGS) -I core -I lexer -I parser -o mafralang -lfl

lexer/lexer.c: lexer/mafralang.l
	flex lexer/mafralang.l

parser/parser.c: parser/mafralang.y
	# bison -d -v -Wcounterexamples parser/mafralang.y
	bison -d -v parser/mafralang_grammar.y

valgrind:
	@echo "Test file: ${TEST_FILE}"
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./mafralang ${TEST_FILE}