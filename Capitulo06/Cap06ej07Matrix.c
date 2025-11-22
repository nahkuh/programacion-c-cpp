/* 
imprime una matriz de dim mXn con m,n en los Naturales | Cap06ej07Matrix.c | 11nov2027 |
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Cap06ej00Funciones.h"



int main(){

    int i;
    int j;

    printf("para crear una matriz con entradas aleatorias, primero sus dimensiones.\n");
    printf("excribe de cuantos reglones: %d",Renglones);
    
    printf("ahora excribe cuantas columnas: %d",Columnas);


    srand(time( NULL ));
    
    double Matrix[Renglones][Columnas]={0};
       
    for( int i=0 ; i<Renglones; i++ ){
        
        for( int j=0; j<Columnas; j++ ){
         
            Matrix[i][j]=rand()%1000+1;
        
        }
        printf("\n\n");
    }    

    imprimirMatriz(Matrix);

    
    return 0;
}
