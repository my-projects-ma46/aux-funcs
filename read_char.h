// lê um char e retorna, não deixa lixo no buffer, 
//  se for digitado mais de um, o restante é ignorado
#include <stdio.h>

#ifndef MY_READ_CHAR
#define MY_READ_CHAR

char read_char() {
    char c, lixo;
    scanf("%c", &c);
    lixo = c;
    while (lixo != '\n') { lixo = getc(stdin); }
    return c;
}

#endif