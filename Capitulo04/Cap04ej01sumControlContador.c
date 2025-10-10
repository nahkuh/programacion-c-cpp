/* 
Escribe un programa que sume una secuencia de enteros. 
El primer entero indica cuantos valores seguirán.
Practica: (for) controlado por contador
| Cap04ej01sumControlcontador | 5oct2025
*/

#include <stdio.h>


int main(void){
    int N=0;
    printf("Escribe un número Entero:\n N = ");
    scanf("%d", &N);
    for( int i = N-1; i > 0; --i){
        i==N-1 ? printf("%d + %d",N,N-1): printf(" + %d", i);
        N=N+i;
    }
    printf(" = %d\n", N);    

    return 0;
}