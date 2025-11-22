/*
Programa que toma una base de datos y calcula una estadistica 3M y frecuencias
| Cap06ej08Estadistico3MyF.c | 13nov2025 | 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Cap06ej00Funciones.h"

int main(){

    
    int i=0;
    char busqueda[]="ascendente"; /* para guardar una busqueda*/
    
    int d[RUL]={0}; /*DATOS RUL ES UNA ALEGORIA A LA RULETA Y QUE LOS OBTENDREMOS DE FORMA ALAEATORIA*/
    int F[DOM]={0}; /*LA FRECUENCIA TIENE UN RANGO DE FRECUENCIAS*/
    int RANGO[DOM]={0}; /*REPRESENTARA EL RANGO DE LA MUESTRA  d[] */
    int MODAS[DOM]={0};
    /* GENERADOR DE DATOS ALEATORIOS DEL 1 AL 100 */
  
    srand(time(NULL));


    for( i=0 ; i<RUL; i++ ){
  
        printf( "%4d  ",d[i]=rand()%DOM+1 );

        if((i+1)%DOM==0)
            printf("\n\n");
    }    

    printf("\n\n\n\n\n\n");

    ordenamientoBurbuja( d, RUL, busqueda   );

    for( i=0 ; i<RUL; i++ ){
        
        
         
        printf( "%4d  ",d[i] );

        if((i+1)%DOM==0)
            printf("\n\n");
    }  
    
    
    printf("\n\n\n\n\n\n");

printf("\n\n");   

    for(int k=0; k<DOM; k++){
        printf("%d  ",RANGO[k]);
    }

    frecuencia(d,RUL,F,DOM,RANGO);

    printf("\n\n");   

    for(int k=0; k<DOM; k++){
        printf("%d  ",RANGO[k]);
    }
    
    printf("\n\n");

    printf("Promedio = %f", promedio(d,RUL) );
        
    printf("\n\n");

    moda( F,DOM, MODAS, RANGO );

    printf("\n\n");

    printf("mediana = %d", mediana(d,RUL));

    return 0;
}
