/* Figura 4.11: fig04_11.c
2 Uso de la instrucción break dentro de la instrucción for */
#include <stdio.h>

/* la función main comienza la ejecución del programa */
int main(){
    int x; /* contador */
    int b; //guarda el valor que devería tener x
    /* repite 10 veces el ciclo */
    for ( x = 1; x <= 10; x++ ) {

     /* si x es 5, termina el ciclo */
    if ( x == 5 ) {
        break; /* rompe el ciclo sólo si x es 5 */
    } /* fin de if */
    
        printf( "%d ", x ); /* despliega el valor de x */
    } /* fin de for */

    printf( "\nRompe el ciclo en x == %d\n", x );

    return 0; /* indica la terminación exitosa del programa */

} /* fin de la función main */