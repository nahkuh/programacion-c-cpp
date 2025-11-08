/*
Pasar arreglos y de elementos de un arreglo a funciones. | Cap06eg194ArreglosAfunciones.c | 04oct2025 |
*/
#include <stdio.h>
#include "Cap06eg00Funciones.h"
#define TAMANIO 5

int main(){
int a[ TAMANIO ] = { 0, 1, 2, 3, 4 }; /* inicializa a */
int i; /* contador */

printf( "Efectos de pasar arreglos completos por referencia:\n\nlos" 
    "valores del arreglo original son:\n" );

    /* muestra el arreglo original */
    for ( i = 0; i < TAMANIO; i++ ) {
    printf( "%3d", a[ i ] );
    } /* fin de for */

    printf( "\n" );

    /* pasa el arreglo a modificaArreglo por referencia */
    modificaArreglo( a, TAMANIO );

    printf( "Los valores del arreglo modificado son:\n" );

    /* muestra el arreglo modificado */
    for ( i = 0; i < TAMANIO; i++ ) {
    printf( "%3d", a[ i ] );
    } /* fin de for */

    /* muestra el valor de a[ 3 ] */ 
    printf( "\n\n\nEfectos de pasar un elemento del arreglo "
    "por valor:\n\nEl valor de a[3] es %d\n", a[ 3 ] );

    modificaElemento( a[ 3 ] ); /* pasa el elemento a[ 3 ] del arreglo por
valor */

    /* muestra el valor a[ 3 ] */
    printf( "El valor de a[ 3 ] es %d\n", a[ 3 ] );

    return 0; /* indica terminación exitosa */
}
