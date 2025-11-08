/*
Lanza un dado de seis lados 6000 veces usando un arreglo | Cap06eg188Tiros6000A.c | 04nov2025 |
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAMANIO 7

int main(void){

    int cara;
    int tiro; /* contador numero del tiros */
    int frecuencia[TAMANIO] = {0};
    int total=0;

    srand( time( NULL ) ); /* generador de semillas de números aleatorios */

    /* tira el dado 6000 veces */

    for( tiro=0; tiro<6000; tiro++ ){
        cara = rand() % 6 + 1;
        ++frecuencia[ cara ];
    }
    
    printf("%s%17s%17s\n","Cara","frecuencia","Histograma");
        /*tabulacion*/
    for(cara=1;cara<TAMANIO;cara++){
        printf("%4d%17d       ",cara,frecuencia[cara]); 
        for(int i=0; i<round( frecuencia[cara]/10); i++ ){
            printf("*");
        }
        printf("\n");
        total+=frecuencia[cara];
    }
    printf("_____________________\nTotal=%15d\n",total);

    return 0;
}