/* Figura 7.10: fig07_10.c
Conversión de letras minúsculas a letras mayúsculas
mediante un apuntador no constante a un dato no constante */

#include <stdio.h>
#include <ctype.h>
#include "Cap07eg00Funciones.h"

int main()
{
char cadena[] = "caracteres y $32.98"; /* inicializa char arreglo */

printf( "La cadena antes de la conversion es : %s", cadena );
convierteAMayusculas( cadena );
printf( "\nLa cadena despues de la conversion es: %s\n", cadena );

return 0; /* indica terminación exitosa */

} /* fin de main */