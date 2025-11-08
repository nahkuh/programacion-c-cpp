/*
busqueda lineal | Cap06eg204BusquedaLineal.c | 06nov2025
*/

#include <stdio.h>
#include "Cap06eg00Funciones.h"
#define TAMANIO 100

int main(void){

    int a[ TAMANIO ]; /* crea el arreglo a */
    int x; /* contador para inicializar los elementos de 0 a 99 del arreglo a */
    int llaveBusqueda; /* valor para localizar en el arreglo a */
    int elemento; /* variable para almacenar la ubicación de llaveBusqueda o -1 */

    /* crea los datos */
    for ( x = 0; x < TAMANIO; x++ ) {
        a[ x ] = 2 * x;
    } /* fin de for */

    printf( "Introduzca la llave de busqueda entera:\n" );

    scanf( "%d", &llaveBusqueda );

    /* intenta localizar llaveBusqueda en el arreglo a */
    elemento = busquedaLineal( a, llaveBusqueda, TAMANIO );

    /* despliega los resultados */
    if ( elemento != -1 ) {
        printf( "Encontre el valor en el elemento %d\n", elemento );
    } /* fin de if */
    else {
        printf( "Valor no encontrado\n" );
    } /* fin de else */

    return 0; /* indica terminación exitosa */

}
