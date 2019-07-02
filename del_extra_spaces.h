#include <string.h>

#ifndef DEL_SPACES
#define DEL_SPACES

/**
 * Delete extra spaces from start and end of a string
 * Ex:
 * string: "    carl jhonson  "
 * result: "carl jhonson"
 */

// falta tirar excesso de espaços no meio

void del_extra_spaces(char *string) {
    int start=0, i=0, end;

    if(string[0] != '\0') {
        // find where string starts
        while (string[start] == ' ') {
            if(string[start] == '\0')
                break;
            start++;
        }
        
        while (string[i]) {
            string[i] = string[start+i];
            i++;
        }
        
        end = strlen(string)-1;

        while (end && (string[end] == ' ')) {
            end--;
        }
        string[end]='\0';
    }
}

#endif
