/*  Imprima 100 asteriscos, uno a la vez, insertando un salto de línea cada 10. Use % para detectar múltiplos.
|Imprima 100 asteriscos, uno a la vez, insertando un salto de línea cada 10. Use % para detectar múltiplos.
Cap03ej07_3.38display100Asteriscos.c | 2oct2025                                                                */

#include <stdio.h>

int main(void){

    int n=1; // declaro e inicio la variable contador de la iteración de la sucesion de los primeros 10 números naturales
    
    
    while(n<=100){
        printf("*");
        if(n%10==0){ 
            printf(" -> %d\n",n);
        }
        n++;
        
    }
    
    
    return 0;

}