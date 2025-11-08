/*
Demostración del calificador de tipo const con arreglos | Cap06eg196CaliFconst.c | 05nov2025 |
*/

#include <stdio.h>
#include "Cap06eg00Funciones.h"

int main(void){

    int a[] = { 10, 20, 30 }; /* inicializa a */

    intentaModifElArreglo( a );

    printf( "%d %d %d\n", a[ 0 ], a[ 1 ], a[ 2 ] );

    return 0; /* indica terminación exitosa */
}