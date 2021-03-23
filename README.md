![alt text](http://www.unb.br/images/Imagens/logo_unb.png)

# Tradutores - 2/2020

## Membro
* Lucas Mafra Chagas - 12/0126443

## Requerimento
* gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* flex 2.6.4
* bison (GNU Bison) 3.5.1
Escrito por Robert Corbett e Richard Stallman.

Copyright © 2020 Free Software Foundation, Inc.
Este é um software livre; veja o código fonte para condições de cópia.
NÃO HÁ QUALQUER GARANTIA; nem mesmo para COMERCIALIZAÇÃO ou de ADEQUAÇÃO A
QUALQUER PROPÓSITO EM PARTICULAR.


## Instrução de Execução

```c
   lex mafralang.l
   gcc lex.yy.c -ll -g -Wall
   ./a.out < code.c
```
Onde code representa um código válido ou inválido.
