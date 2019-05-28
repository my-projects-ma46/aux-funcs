#include <stdio.h>
#include <stdlib.h>     /* atoi */
#include "../auxiliary-functions/all.h"
/*
Programa para testes, siga os passos abaixo

compile e execute com:
   gcc test.c test.out && ./test.out

ao rodar, copie (excet as ´´´, e incluia a quebra de linha final)
  e cole essas entradas:
´´´
9182367498127467
-2384792837488
245
47.3005
q
abcdefg


´´´

a saída deve ser:

inteiro lido 245
float lido 47.300499
char lido q
string lida abcd

*/

int main(int argc, char const *argv[])
{
    printf("essa mensagem nao pode aparecer no terminal\n");
    clear_screen();
    printf("digite um inteiro\n");
    int a = read_integer();

    printf("digite um float\n");
    float f = read_float();
    
    printf("digite um char\n");
    char c = read_char();
    
    printf("digite uma string\n");
    char str[5];
    read_string(str,5);

    clear_screen();

    printf("inteiro lido %d\n",a);
    printf("float lido %f\n",f);
    printf("char lido %c\n",c);
    printf("string lida %s\n",str);
    
    return 0;
    
}
