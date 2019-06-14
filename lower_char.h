#ifndef MY_LOWER
#define MY_LOWER

char lower_char(char letter) {
    if (letter >= 'A' && letter <= 'Z')
        return (letter+32);
    return letter;
}

#endif