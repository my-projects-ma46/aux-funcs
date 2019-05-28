// para até usuário apertar enter
#include <stdio.h>
#include "read_char.h"

#ifndef MY_PAUSE
#define MY_PAUSE

void pause(void) {
  printf("\nPressione enter para continuar...\n");
  char aux = read_char();
}

#endif // MY_PAUSE