// Ejercicio R2: Promedio con repeticion controlada por centinela
// |28sep2025| Cap03eg02PromedioCCentinela.c

#include <stdio.h>

int main(void){
    int total=0, contador = 0, calificacion=0; /* las variables deben inicializarse antes de ser usadas */
    float promedio; /* y puedenden ser iniciadas despues de ser declaradas mediante una asignación */

    while (calificacion != -1){ /* el valor centinela es -1 para salir del ciclo de captura */
        printf("Número: %d, Introduce calificación ó -1 para salir y obtener el promedio: ",contador+1);
        scanf("%d", &calificacion);
        if(calificacion != -1){ 
            total += calificacion;
            contador++;
        }
    }
    if(contador!=0){
        promedio = (float) total/contador; /* incluimos operador de conversión para que convierta los numeros de las variable y la operacion en punto flotante mientra preserva las variables enteras origen*/
        printf("Promedio: %f\n",promedio); 
    }else{
        printf("No se introdujeron calificaciones\n");
    }
    return 0;
}