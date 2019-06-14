#include "lower_char.h"

#ifndef MY_LOWER_STRING
#define MY_LOWER_STRING

void lower_string(char *string) {
    for (int i = 0; string[i]; i++) {
        string[i] = lower_char(string[i]);
    }
}

#endif