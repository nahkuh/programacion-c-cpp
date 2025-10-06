// Use un ciclo para imprimir los números del 1 al 10 separados por tres espacios.
// |Cap03ej04_3.23Prim10naturales.c| 30sep2025

#include <stdio.h>

int main(void){

    int n=1; // declaro e inicio la variable contador de la iteración de la sucesion de los primeros 10 números naturales
    int i;   //declaro la variable contador del escritor o control de salida printf
    
    while(n<=10){
        if(n==1){ 
            printf("%d",n);
        }else{
           
            printf("   "); 
            printf("%d",n);
            
        }      
      
        n++;
        
    }
    
    
    return 0;

}
