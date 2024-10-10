// MUSA DALANÇIKAR

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "nutility.h"

#define     SIZE    100

int main(void) 
{
    char str[SIZE];

    printf("iki kelime girin: ");
    sgets(str);
    printf("(%s)\n", str);

    int idx_space = 0;
    while (str[idx_space] != ' ')
        ++idx_space;

    for (int i = 0; i < idx_space / 2; ++i) {
        char temp = str[i];
        str[i] = str[idx_space - i - 1];
        str[idx_space - i - 1] = temp;
    }

    int len = (int)strlen(str);
    for (int i = idx_space + 1, j = 0; i < (len + idx_space + 1) / 2; ++i, ++j) {
        char temp = str[i];
        str[i] = str[len - j - 1];
        str[len - j - 1] = temp;
    }

    for (int i = 0; i < len / 2; ++i) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("(%s)\n", str);
}
