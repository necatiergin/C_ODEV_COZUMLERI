//MUSA DALANCIKAR

#define _CRT_SECURE_NO_WARNINGS

#include "nutility.h"
#include <stdio.h>

#define     SIZE        100

int main(void)
{
    int a[SIZE + 1] = { 0 };

    randomize();
    set_array_random(a, SIZE);
    print_array(a, SIZE);

    int key;

    printf("aranacak degeri giriniz: ");
    scanf("%d", &key);

    a[SIZE] = key;

    int i = 0;
    while (a[i] != key)
        i++; 

    if (i < SIZE) {
        printf("bulundu dizinin %d indisli elemani\n", i - 1);
    }
    else {
        printf("bulunamadi\n");
    }
}
