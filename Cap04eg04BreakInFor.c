/*
|Uso de break; en un ciclo for | Cap04eg04BreakInFor.c | 5oct2025
*/
#include <stdio.h>

int main(void){
    for(int x = 1; x <= 10; x++){
        if( x == 5 ) break;
        printf("%d ", x);
    } 
    printf("\nRompe en x == 5\n");

    return 0;
}