/* Cap04ej08sustitutoDcontinue.c | 7oct2025 */
/* Figura 4.11: fig04_11.c -> | Cap04ej07sustitutoDbreak.c | 7oct2025
2 Uso de la instrucción break dentro de la instrucción for */
#include <stdio.h>

/* la función main comienza la ejecución del programa */
int main(){
    int x; /* contador */
    int b; //guarda el valor que debería tener x
    /* repite 10 veces el ciclo */
    for ( x = 1; x <= 10; x++ ) {

       // /* si x es 5, termina el ciclo */
       // if ( x == 5 ) {
       // break; /* rompe el ciclo sólo si x es 5 */
        //} /* fin de if */
    /* si x es 5, termina el ciclo */
    x==5 ? /*si x es 5 no hagas nada  solo pasa al siguiente ciclo*/ : printf( "%d ", x ); /* despliega el valor de x */
    } /* fin de for */
    
    printf( "\nciclo discontinuo termina en x == %d\n", x );

    return 0; /* indica la terminación exitosa del programa */

} /* fin de la función main */