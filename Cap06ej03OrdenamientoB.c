/*
muestra ordenamiento descendente | Cap06ej03OrdenamientoB.c | 10nov2025 | 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Cap06ej00Funciones.h"



int main(){

    char selector[]="descendente";

    int i=1;
    
    int a[Net]={0};
    double b[Net];
    srand( time(NULL) );
    printf("Los datos son: \n");


    for(i=1; i<=Net; i++){
        
        printf("%3d, ", a[i-1]=rand()%100);
        if( (i)%30==0 ){
            printf("\n");
        }
      
    }
    
    printf("Ordena ascendente O descendente (escribe una de las 2): ");
    scanf("%s",selector);

    ordenamientoBurbuja(a, Net, selector);


    for(i=1; i<=Net; i++){
        
        printf("%3d, ", a[i-1]);
        if( (i)%30==0 ){
            printf("\n");
        }
    
    }


    return 0;
}
