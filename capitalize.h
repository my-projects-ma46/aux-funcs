#include "lower_string.h"
#include "upper_char.h"

#ifndef MY_CAPITALIZE
#define MY_CAPITALIZE

void capitalize(char *string) {
    lower_string(string);
    string[0] = upper_char(string[0]);
}

void capitalize_all(char *string) {
    // pode ser otimizado para não usar capitalize(string)
    capitalize(string);
    if ((string[0]+string[1]) != '\0') { // if has at least 2 letters
        for (int i = 1; string[i]; i++) {
            if (string[i-1] == ' ') { // if it is a beginnig of a word
                string[i] = upper_char(string[i]);
            }
        }
    }
}

#endif
