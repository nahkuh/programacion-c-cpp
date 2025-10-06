/* Lea cinco números, del (1-30) e imprima una linea de asteriscos por cada número.
practica: (for) anidado, cilos simples.
| Cap04ej03LinAsteriscosXnum.c | 5oct2025
*/

#include <stdio.h>

int main(void){
    
    int nAster;
    for( int r=1; r<=5; ++r){
        printf("entrada: %d, escribe un numero: ",r);
        scanf("%d",&nAster);
        for( int i=1; i<=nAster; ++i){
            for( int j=1; j<=nAster; ++j){
                printf("*");   
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}