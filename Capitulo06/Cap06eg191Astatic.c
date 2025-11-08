/*
Iniciamos arreglos static en CERO | Cap06eg191Astatic.c
*/

#include <stdio.h>
#include "Cap06eg00Funciones.h"

int main(void){

    printf( "Primera llamada a la funcion:\n" );
    iniciaArregloEstatico();
    printf( "\n\nSegunda llamada a la funcion:\n" );
    iniciaArregloEstatico();
    
    printf( "\n\n\n" );
  

    printf( "Primera llamada a la funcion:\n" );
    iniciaArregloAutomatico();
    printf( "\n\nSegunda llamada a la funcion:\n" );
    iniciaArregloAutomatico();


    return 0; /* indica terminación exitosa */
}
