// Lea dos enteros x e y, y calcule (x^y) mediante multiplicación repetida en un ciclo while.
// |Cap03ej02_3.8PotenciaXY.c| 30sep2025

#include <stdio.h>

int main(void){

    int n=1; // declaro e inicio la variable contador de la iteración de la suma acumulada
    int i;   //declaro la variable contador del escritor o control de salida printf
    int x,y; // en esta variable acumularemos la suma
    float potencia=1;// en esta variable acumularemos los |y| factores

    printf("para realizar  la potencia y de x, i.e., x^y\nintroduce un valor para x:");
    scanf("%d", &x);
    printf("ahora un valor para y:");
    scanf("%d", &y);

    if(y==0) { //por definición x^0 = 1

        potencia=1;// en esta variable acumularemos los |y| factores
        x=1;
    }else{
        if(y>0){ //si la potencia es positiva

            while(n<=y){ // iteracion si la potencia es positiva
                if(n==1){ 
                    printf("%d",x);
                 
                }else{
                    i=2;              //cada vez que entre al ciclo reiniciamos con i=2
                    while(i<=n){
                        printf(" ");
                        i++;
                    }  
                printf("*%d",x);
            
                }      
                potencia*= (int)x;      
                n++;
        
            }
        }else{ //si la potencia es negativa
            while(n<=-y){ // iteracion si la potencia es negativa
                if(n==1){ 
                    printf("(1/%d)",x);
                 
                }else{
                    i=2;              //cada vez que entre al ciclo reiniciamos con i=2
                    while(i<=n){
                        printf(" ");
                        i++;
                    }  
                printf("*(1/%d)",x);
            
                }      
                potencia/=(float)x; 
                n++;
        
            }
        }    
    }
    
    if(y<0) printf("=%f\n",potencia);
    else{
        printf("=%d\n", (int) potencia);
    }
    return 0;
}
