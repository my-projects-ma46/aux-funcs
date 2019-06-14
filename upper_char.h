#ifndef MY_UPPER
#define MY_UPPER

char upper_char(char letter) {
    if (letter >= 'a' && letter <= 'z')
        return (letter-32);
    return letter;
}

#endif