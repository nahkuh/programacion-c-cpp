/* Figura 7.11: fig07_11.c
Impresión de una cadena carácter por carácter mediante
un apuntador no constante a un dato constante */

#include <stdio.h>
#include "Cap07eg00Funciones.h"



int main()
{
    /* inicializa el arreglo de caracteres */
    char cadena[] = "imprime los caracteres de una cadena";

    printf( "La cadena es:\n" );
    imprimeCaracteres( cadena );
    printf( "\n" );

    return 0; /* indica terminación exitosa */

} /* fin de main */