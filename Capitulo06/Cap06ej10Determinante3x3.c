/* 
Este programa calcula el valor de un determinante de 3x3 | Cap06ej10Determinante3x3.c | 19nov2025 |
*/

#include <stdio.h>
#include "Cap06ej00Funciones.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void){

    
    int i;
    int j;

    printf("para crear una matriz con entradas aleatorias, primero sus dimensiones.\n");
    printf("excribe de cuantos reglones: %d",Renglones);
    
    printf("ahora excribe cuantas columnas: %d",Columnas);


    srand(time( NULL ));
    
    double x[Renglones][Columnas]={0};
       
    for( int i=0 ; i<Renglones; i++ ){
        
        for( int j=0; j<Columnas; j++ ){
         
            x[i][j]=rand()%100+1;
        
        }
        printf("\n\n");
    }    

    printf("\n\n");
    imprimirMatriz(x);

    for( int i=0 ; i<Renglones; i++ ){
        
        for( int j=0; j<Columnas; j++ ){
         
            
            printf( "%5f  ",x[i][j]);
        
        }
        printf("\n\n");
    }
        
    printf("\n\nDetetminante = %d",(int) Determinante(x,Renglones));



    return 0;
}