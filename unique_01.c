//MUSA DALANÇIKAR

#include <stdio.h>
#include <stdlib.h>
#include "nutility.h"

#define     SIZE        10

int main(void)
{
    int a[SIZE] = { 0 };

    randomize();

    for (int i = 0; i < SIZE; ++i) {
        a[i] = rand() % 20 + 1;
        printf("%d ", a[i]);
    }
    printf("\n");

    for (int i = 0; i < SIZE; ++i) {
        for (int k = 0; k < a[i]; ++k) {
            putchar('*');
        }
        putchar('\n');
    }

    int max = a[0];
    for (int i = 1; i < SIZE; ++i) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("--------------------------------------------------------------------------\n");

    for (int j = max; j > 0; --j) {
        for (int k = 0; k < SIZE; ++k) {
            if (j <= a[k]) {
                putchar('*');
            }
            putchar('\t');
        }
        printf("\n");
    }
    printf("algoritma karmasikligi = O(n^2)");
}
