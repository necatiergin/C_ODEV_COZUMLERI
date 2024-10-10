// MUSA DALANÇIKAR

#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <ctype.h>

#define     SIZE    100

int main(void) 
{
    char str[SIZE];

    printf("bir sayi girin: ");
    scanf("%s", str);
    printf("(%s)\n", str);

    int ival = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (isdigit(str[i])) {
            ival = ival * 10 + str[i] - '0';
        }
    }
    if (str[0] == '-') {
        ival *= -1;
    }
    printf("ival = %d\n", ival);
}
