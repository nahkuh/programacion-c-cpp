/*
|Uso de continue; en un ciclo for | Cap04eg04BreakInFor.c | 5oct2025
*/
#include <stdio.h>

int main(void){
    for(int x = 1; x <= 10; x++){
        if( x == 5 ) continue;
        printf("%d ", x);
    } 
    printf("\nIgnora el 5\n");

    return 0;
}