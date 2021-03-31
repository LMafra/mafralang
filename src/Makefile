mafralang:		
	bison -vdt -Wconflicts-sr  -Wcounterexamples --graph mafralang.y
	flex mafralang.l;
	gcc -g -Wall mafralang.tab.c lex.yy.c -o mafralang -lfl

clean:
	rm -f *.o *~ lex.yy.c mafralang.tab.c mafralang.tab.h mafralang.output mafralang.dot logfile.out mafralang
