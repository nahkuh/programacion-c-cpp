/* Figura 5.4: fig05_04.c
2 Encuentra el máximo de tres enteros | 
Cap05eg134Maximo.c|17oct2025 */

#include <stdio.h>
#include "Cap05eg00Funciones.h"

int main(void){
    int numero1;
    int numero2;
    int numero3;

    printf("Introduzca tres enteros: ");
    scanf("%d%d%d",&numero1,&numero2,&numero3);

    /* numero1, numero2, numero3 son argumentos 
    para la llamada a la funcion */
    printf("El maximo es: %d\n", maximo( numero1, numero2, numero3 ) );

    return 0;
}
