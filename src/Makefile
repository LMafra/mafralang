mafralang:		
	bison -vdt -Wconflicts-sr  -Wcounterexamples --graph yacc_lexer/mafralang_grammar.y
	flex yacc_lexer/mafralang.l;
	gcc -g -Wall includes/symbolTable.c includes/ast.c mafralang_grammar.tab.c lex.yy.c -o mafralang -lfl

clean:
	rm -f *.o *~ *.out lex.yy.c mafralang_grammar.tab.c mafralang_grammar.tab.h mafralang_grammar.output mafralang_grammar.dot logfile.out mafralang
