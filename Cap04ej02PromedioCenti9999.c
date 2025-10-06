/*  
    Calcule el promedio de enteros usando 9999 como centinela.
    Practica: repetición controlada por centinela.
    |Cap04ej02PromedioCenti9999.c| 5oct2025 
*/

#include <stdio.h>

int main(void){
    int n=0;
    int dato;
    float promedio;
    printf("Introduce un entero o 9999 para terminar la entrada de datos\n");
    do{
        ++n;
        printf("Entrada: %d, introduce un dato numerico entero: ",n);
        scanf("%d",&dato);
        if(dato!=9999)
            promedio+=(float)dato;

    }while(dato!=9999);
    printf("el Promedio es M=%f\n",promedio=(float)promedio/n);

    return 0;    
}