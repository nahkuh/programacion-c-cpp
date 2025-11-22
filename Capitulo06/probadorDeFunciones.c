/*
solo sirve para probar funciones que no hacen lo que deberían
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Cap06ej00Funciones.h"

int main(void){

    
    int i=0;
    char busqueda[]="ascendente"; /* para guardar una busqueda*/
    
    int d[DOM]={0}; /*DATOS RUL ES UNA ALEGORIA A LA RULETA Y QUE LOS OBTENDREMOS DE FORMA ALAEATORIA*/
    int F[DOM]={0}; /*LA FRECUENCIA TIENE UN RANGO DE FRECUENCIAS*/
    int RANGO[DOM]={0}; /*REPRESENTARA EL RANGO DE LA MUESTRA  d[] */
    int MODAS[DOM]={0};
    /* GENERADOR DE DATOS ALEATORIOS DEL 1 AL 100 */


    for( i=0 ; i<DOM; i++ ){
  
        printf( "%3d  ",d[i]=DOM-i );

        if((i+1)%(DOM/4)==0)
            printf("\n\n");
    } 

    
    printf("\n\nd[99]=%d\n\n",d[DOM-1]);

    ordenamientoBurbuja( d, DOM, busqueda   );


    for( i=0 ; i<DOM; i++ ){
  
        printf( "%3d  ",d[i] );

        if((i+1)%(DOM/4)==0)
            printf("\n\n");
    } 

    printf("\n\n");

    frecuencia(d,DOM,F,DOM,RANGO);

    printf("\n\n");   

    for(int k=0; k<DOM; k++){
        printf("%d  ",F[k]);
    }

    printf("\n\n");   

    for(int k=0; k<DOM; k++){
        printf("%d  ",RANGO[k]);
    }

    moda( F,DOM,MODAS,RANGO);

    promedio(d,DOM);

    return 0;
}
