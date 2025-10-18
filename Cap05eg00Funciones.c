/*
Implementación de la biblioteca de funciones
archivo definicion de funciones
Cap05eg00Funciones.c|16oct2025|*/

#include "Cap05eg00Funciones.h"

/* definición de la función cuadrado, devuelve el cuadrado del parámetro */
int cuadrado( int y ){ /* y es una copia del argumento para la función */
 
return y * y; /* devuelve el cuadrado de y como un int */
} /* fin de la función cuadrado */


/* Definición de la función maximo */
/* x, y, y z son parámetros */
int maximo( int x, int y, int z ){
    int max = x; /* asume que x es el mayor */

    if ( y > max ) { /* si y es mayor que max, asigna y a max */
    max = y;
    } /* fin de if */
    if ( z > max ) { /* si z es mayor que max, asigna z a max */
    max = z;
    } /* fin de if */

    return max; /* max es el valor más grande */

} /* fin de la función maximo */ 



