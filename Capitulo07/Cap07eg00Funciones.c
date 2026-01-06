/*libreria funciones del Capitulo 7*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include "Cap07eg00Funciones.h"

int cuboPorValor( int n ){ /* calcula y devuelve el cubo de un argumento entero, para probar una 
                            llamada a una funcion con argumentos pasados por valor*/

return n * n * n; /* eleva al cubo la variable local n y devuelve el resultado */

} /* fin de la función cuboPorValor */


/* calcula el cubo de *ptrN; modifica la variable numero en main para probar una llamada a una funcion con argumentos pasados por refernencia*/
void cuboPorReferencia( int *ptrN ){

*ptrN = *ptrN * *ptrN * *ptrN; /* cubo de *ptrN */

} /* fin de la función cuboPorReferencia */ 


/* convierte una cadena a letras mayúsculas apuntador ptrs NO CONSTANTE a dato *ptrs NO CONSTANTE*/
void convierteAMayusculas( char *ptrS )
{
while ( *ptrS != '\0' ) { /* el carácter actual no es ‘\0’ */

if ( islower( *ptrS ) ) { /* si el carácter es minúscula, */
*ptrS = toupper( *ptrS ); /* Lo convierte a mayúscula */
} /* fin de if */

++ptrS; /* mueve ptrS al siguiente carácter */
} /* fin del while */

} /* fin de la función convierteAMayusculas */ 
