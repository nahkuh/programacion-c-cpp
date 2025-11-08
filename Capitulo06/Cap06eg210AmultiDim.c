/*
Inicialización de arreglos multidimencionales | Cap06eg210AmultiDim.c | 7nov2025 |
*/

#include <stdio.h>  
#include "Cap06eg00Funciones.h"

int main(void){

    /* inicializa arreglo1, arreglo2, arreglo3 */
    int arreglo1[ 2 ][ 3 ] = { { 1, 2, 3 }, { 4, 5, 6 } };
    int arreglo2[ 2 ][ 3 ] = { 1, 2, 3, 4, 5 };
    int arreglo3[ 2 ][ 3 ] = { { 1, 2 }, { 4 } };

    printf( "Los valores en el arreglo1 por linea son:\n" );
    despliegaArreglo ( arreglo1 );

    printf( "Los valores en el arreglo2 por linea son:\n" );
    despliegaArreglo ( arreglo2 );

    printf( "Los valores en el arreglo3 por linea son:\n" );
    despliegaArreglo ( arreglo3 );

    return 0; /* indica terminación exitosa */



}









