/*
suma los elementos de un arreglo | Cap06eg184ArrangeSum.c | 03nov2025 |
*/

#include <stdio.h>
#define TAMANIO 12

int main(void){
    int a[TAMANIO]={1,3,5,4,7,2,99,16,45,67,89,45};
    int i; /*contador*/
    int total=0; 
    /*acumula la suma hasta obtener el total*/
    for(i=0;i<TAMANIO;i++){
        total+=a[i];
    }

    printf("El total de la suma de los elementos del arreglo es %d\n",total);

    return 0;

}