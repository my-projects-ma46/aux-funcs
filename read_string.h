// objetivo:    Ler entrada do teclado, e armazenar em char *
//              não deixa lixo no buffer
// parametros:  ponteiro para vetor de caracteres e tamanho desse vetor
#include <stdio.h>

#ifndef MY_READ_STRING
#define MY_READ_STRING

void read_string(char *string, int nroLetras) {
  int i = 0;
  char lixo;
  scanf("%c", string);
  if (*string != '\n')
    while ( ((string[++i] = getc(stdin) ) != '\n') && (i < nroLetras-1)) {}
  if(i == nroLetras-1) while ((lixo = getc(stdin) ) != '\n') {}
  string[i] = '\0';
}
#endif // MY_READ_STRING