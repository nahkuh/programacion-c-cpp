/*
muestra busqueda lineal | Cap06ej04BusquedaL.c | 11nov2025 | 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Cap06ej00Funciones.h"

#define N 1000

int main(){

    char encontrado[15]={'\0'};
    int clave;
    int i=1;
    int busqueda;
    
    int a[N]={0};
    double b[N];
    srand( time(NULL) );
    printf("Los datos son: \n");


    for(i=1; i<=N; i++){
        
        printf("%4d, ", a[i-1]=rand()%100+1);
        if( i%10==0 ){
            printf("\n");
        }
      
    }
    printf("la cardinalidad del conjuto es %d \n",N);
    printf("busca un numero del 1-100: ");
    scanf("%d",&clave);

    busqueda=busquedaLineal(a, N, clave);

    printf("\n busqueda %d\n", busqueda);

    if(busqueda==-1){
        printf("el numero buscado no se encuentra en la lista\n");
    }else{
        printf("La posicion en la que se encuentra en el arreglo es %d, cuyo valor es %d\n",busqueda,a[busqueda]);
    }
    

    return 0;
}
