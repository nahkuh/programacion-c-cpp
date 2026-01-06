/* Figura 7.7: fig07_07.c
Eleva al cubo una variable mediante una llamada por referencia, con un
apuntador como argumento */

#include <stdio.h>
#include "Cap07eg00Funciones.h"

int main(){
int numero = 5; /* inicializa numero */

printf( "El valor original de numero es %d", numero );

/* pasa la dirección de numero a cuboPorReferencia */
cuboPorReferencia( &numero );

printf( "\nEl nuevo valor de numero es %d\n", numero );

return 0; /* indica terminación exitosa */

} /* fin de main */