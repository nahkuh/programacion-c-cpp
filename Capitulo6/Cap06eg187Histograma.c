/*
crea el histograma de una estadistica | Cap06eg187Histograma.c | 04nov2025 | 
*/

#include <stdio.h>
#define TAMANIO 10

int main(){

    /*usamos una lista de puntos de la estadistica para inicializar n[]*/
    int n[ TAMANIO ]={  19,3,15,  7,11,9,  13,5,17,1  };
    
    int i; /*contador for externo, i.e., contador para los elementos del arreglo*/
    int j; /*contador for interno, i.e., cuenta *s en cada barra del histograma*/

    printf("%s%13s%17s\n","Elemento","Valor","Histograma");

    /* para cada elemento del arreglo n, muestra una barra en el histograma */
    for(i=0; i<TAMANIO; i++){
        printf("%7d%13d        ", i,n[i]);
        for(j=1; j <= n[ i ]; j++){ /* imprime una barra */
            printf( "%c",'*');
        }
        printf("\n"); /*fin de cada barra*/
    }

    return 0;
}