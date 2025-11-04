/*  inicializar un arreglo en ceros |Cap06egIniArrange.c|03nov2025| */  

#include <stdio.h>

int main(void){

    int n[10]; /* n es el nombre del arreglo 10 es el tamaño del arreglo */
    int i;     /* i indice de conteo */

    /* incializamos los elments del arreglo, n[i]=0;  */
    for( i=0; i<10; i++ ){
        n[i]=0;
    }
    /* Encabezado tabular*/
    printf("%s%13s\n", "Elemento","Valor");

    /* Tabula los valores del arreglo */
    for( i=0; i<10; i++ ){
        printf("%7d%13d\n", i, n[i] );
    }
    
    return 0;


}