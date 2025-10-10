/* Suma los primeros pares naturales hasta el número 100 con el ciclo (for) | Cap04eg01sumPares.c | 4oct2025  */

#include <stdio.h>

int main(void){
    int suma=0, numero;
    for( numero = 2; numero <= 100; numero += 2)
        suma += numero, printf("%d + ",numero);
    printf("suma es %d\n", suma);
    return 0;
}