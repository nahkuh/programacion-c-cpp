/*
busqueda binaria | Cap06eg204Busquedabinaria.c | 06nov2025
*/

#include <stdio.h>
#include "Cap06eg00Funciones.h"
#define TAMANIO 15

int main(void){

    int a[ TAMANIO ]; /* crea el arreglo a */
    int i; /* contador para inicializar los elementos de 0 a 14 del arreglo a */
    int llave; /* valor a localizar en el arreglo a */
    int resultado; /* variable para almacenar la ubicación de la llave o -1 */

    /* crea los datos */
    for ( i = 0; i < TAMANIO; i++ ) {
        a[ i ] = 2 * i;
    } /* fin de for */

    printf( "Introduzca un numero entre 0 y 28: " );
    scanf( "%d", &llave );

    despliegaEncabezado( TAMANIO );

    /* busca la llave en el arreglo a */
    resultado = busquedaBinaria( a, llave, 0, TAMANIO - 1, TAMANIO );

    /* despliega los resultados */
    if ( resultado != -1 ) {
        printf( "\n%d se encuentra en el elemento %d del arreglo\n", llave,
        resultado );
    } /* fin de if */
    else {
        printf( "\n%d no se encuentra\n", llave );
    } /* fin de else */

    return 0; /* indica terminación exitosa */


}