/* Figura 7.6: fig07_06.c
Eleva al cubo una variable mediante una llamada por valor */
#include <stdio.h>
#include "Cap07eg00Funciones.h"

int main()
{
int numero = 5; /* inicializa numero */

printf( "El valor original de numero es %d", numero );

/* pasa numero por valor a cuboPorValor */
numero = cuboPorValor( numero );

printf( "\nEl nuevo valor de numero es %d\n", numero );

return 0; /* indica terminación exitosa */

} /* fin de main */