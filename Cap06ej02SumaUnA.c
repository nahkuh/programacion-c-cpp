/*
suma los elementos de un arreglo | Cap06ej02SumaUnA.c | 10nov2025 | 
*/

#include <stdio.h>
#include "Cap06ej00Funciones.h"

#define N 100

int main(){
    int i=1;
    
    int a[N]={0};
    double b[N];

    for(i=1; i<=N; i++){
        printf("%3d, ", a[i-1]=i);
        b[i-1]=(double)a[i-1];
        if( i%10==0 ){
            printf("\n");
        }
    }
    printf("\nLa suma de la serie es, %f",sumaArreglo(b,N));

    return 0;
}
