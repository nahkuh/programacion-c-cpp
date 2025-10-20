/*
Implementación de la biblioteca de funciones
archivo definicion de funciones
Cap05eg00Funciones.c|16oct2025|*/

#include "Cap05eg00Funciones.h"
#include <stdio.h>
#include <stdlib.h>

extern int x;

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


/* tiro de dados, calcula la suma y despliega los resultados */
int tiraDados( void ){
    int dado1; /* primer dado */
    int dado2; /* segundo dado */
    int sumaTemp; /* suma de los dados */

    dado1 = 1 + ( rand() % 6 ); /* toma el aleatorio para el dado1 */
    dado2 = 1 + ( rand() % 6 ); /* toma el aleatorio para el dado2 */
    sumaTemp = dado1 + dado2;   /* suma el dado1 y el dado2 */

    /* despliega los resultados de este tiro */
    printf( "El jugador tiro %d + %d = %d\n",dado1,dado2,sumaTemp);

    return sumaTemp; /* devuelve la suma de los dados */
}

/* usoLocal reinicializa a la variable local x durante cada llamada */
void usoLocal( void ){
    int x=25; /* se iniciliza cada vez que se llama usoLocal */

    printf( "\nla x local estatica es %d despues de entrar a usoLocal\n", x );
    x++;
    printf( "la x local en usoLocal es %d antes de salir de usoLocal\n", x );

}

/* usoStaticalLocal inicializa la variable static local x solo la primera vez que 
   se invoca a la función; el valor de x se guarda entre las llamadas a esta función */
void usoStaticLocal(void){
    /*se inicializa sólo la primera vez que se invoca a usoStaticLocal */
    static int x = 50;

    printf( "\n la x local estatica es %d al entrar a usoStaticLocal\n", x );
    x++;
    printf( "la x local estatica es %d al salir de usoStaticLocal\n", x );
}

/* la función usoGlobal modifica la variable global x durante cada llamada */
void usoGlobal(void){
    printf( "\nla x global es %d al entrar a usoGlobal\n",x);
    x *= 10;
    printf( "la x global es %d al salir de uusoGlobal\n", x );

}

