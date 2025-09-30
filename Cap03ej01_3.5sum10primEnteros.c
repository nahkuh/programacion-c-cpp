// Escriba un programa que calculé la suma de los enteros del 1 al 10 usando un ciclo while.
// |Cap03ej01_3.5sum10primEnteros.c| 30sep2025

#include <stdio.h>

int main(void){

    int n=1; // declaro e inicio la variable contador de la iteración de la suma acumulada
    int i;   //declaro la variable contador del escritor o control de salida printf
    int sum=0; // en esta variable acumularemos la suma
    while(n<=10){
        if(n==1){ 
            printf("%d",n);
        }else{
            i=2;              //cada vez que entre al ciclo reiniciamos con i=2
            while(i<=n){
                printf(" ");
                i++;
            }  
            printf("+%d",n);
            
        }      
        sum+=n;
        if(n==10) {
            printf("=%d\n",sum);
            printf("=%d\n",n*(n+1)/2);    
        }
        n++;
        
    }
    


}
