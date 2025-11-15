/*
Programa que inicia un arreglo de 10 enteros con los primeros 10 números pares y los imprima 
| Cap06ej01N10pares.c | 8nov2025 |

*/

#include <stdio.h>
#define N 100

int main(){
    int i=1;
    
    int a[N]={0};

    for(i=1; i<=N; i++){
        printf("%3d, ", a[i-1]=2*i);
        if( i%10==0 ){
            printf("\n");
        }
    }

    return 0;
}
