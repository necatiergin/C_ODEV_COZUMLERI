// MUSA DALANÇIKAR

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "nutility.h"

#define SIZE 100


char* mystrstr(const char* pstr, const char* pkey) 
{
    int cnt_pkey = 0;
    int len = (int)strlen(pkey);

    for (int i = 0; pstr[i] != '\0'; ++i) {
        if (pstr[i] == pkey[cnt_pkey]) {
            cnt_pkey++;
            if (cnt_pkey == len) {
                return (char*)(pstr + i - len + 1);
            }
        }
        else {
            cnt_pkey = 0;
        }
    }
    
    return NULL;
}

int main(void)
{
    char pstr[SIZE];
    char pkey[SIZE];

    printf("icinde arama yapilacak yaziyi girin: ");
    sgets(pstr);
    printf("aranacak yaziyi giriniz. ");
    sgets(pkey);
    printf("(%s) yazisi icinde (%s) yazisi araniyor\n", pstr, pkey);

    char* pfound = mystrstr(pstr, pkey);
    if (pfound) {
        printf("bulundu idx = %d\n", pfound - pstr);
        puts(pfound);
    }
    else {
        printf("bulunamadi\n");
    }
}
