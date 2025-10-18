/* Figura 5.9: fig05_09.c
 Randomización del programa de dados 
 | Cap05eg141SeudoRandum.c | 17oct2024 |
 */
#include <stdio.h>
#include <stdlib.h>

/* la función main comienza la ejecución del programa */
int main(void){
    int i; /*contador*/
    unsigned semilla; /* número que se utiliza para establecer la semilla
                        del generador de números aleatorios */
    printf( "Introduzca la semilla: " );
    scanf( "%u", &semilla );

    srand( semilla ); /* sembramos la semilla en la función generadora se números seudoaleatorios */

    /* repite 10 veces */
    for( i=1; i<=10; i++ ){
        /* obtien y despliega un número aleatorio entre 1 y 6 */
        printf( "%10d", 1 + ( rand() % 6 ) );

        /* si contador es divisible entre 5, comienza una nueva linea de salida */
        if( i%5 == 0 )
            printf( "\n" );
        
    }

    return 0;
}
