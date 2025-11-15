/* 
simula una partida de 36k tiros de 2 dados | Cap06ej06TiraDados36k.c | 11nov2027 |
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Cap06ej00Funciones.h"

int main(){

    
    int i=1;
    int busqueda; /* para guardar una busqueda*/
    
    int d[ENE][DAD]={0};
    int f[NUM][NUM]={{0},{0}};
    int F[DAD*NUM-1]={0};
    

    tira2Dados(d,f);

    histograma(f,F);

    for( int i=0 ; i<NUM; i++ ){
        
        for( int j=0; j<NUM; j++ ){
         
            printf( "%4d  ",f[i][j] );

        }
        printf("\n\n");
    }    


    int acumula;
    printf("\n\n SUMA DE DADOS | FRECUENCIA  \n");
    for( int i=0; i<DAD*NUM-1; i++ ){
        
    
        printf(" %7d       | %6d      ",i+2,F[i]);
        
        for( int k=1; k<=F[i]/6; k++ ){
            if( k != F[i]/6 ){
                printf("-");
            }else{ printf(">\n"); }
        }
        
        printf("\n");
    }


    
    return 0;
}
