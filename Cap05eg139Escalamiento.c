/* Figura 5.7: fig05_07.c
Escalamiento y cambio de enteros producidos por 1 + rand() % 6 
| Cap05eg139Escalamiento.c | 17oct2025
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i; /*contador*/
    /*Repite 20 veces*/
    for( i=1; i<=20; i++ ){
        /* Obtiene y despliega un número aleatorio entre 1 y 6 */
        printf( "%10d", 1 + ( rand() % 6 ) );

        /* si el contador es divisible entre 5, comienza una nueva línea de salida */
        if( i % 5 == 0 ){
            printf( "\n" );
        }


    }

    return 0;
}