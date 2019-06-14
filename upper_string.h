#include "upper_char.h"

#ifndef MY_UPPER_STRING
#define MY_UPPER_STRING

void upper_string(char *string) {
    for (int i = 0; string[i]; i++) {
        string[i] = upper_char(string[i]);
    }
}

#endif