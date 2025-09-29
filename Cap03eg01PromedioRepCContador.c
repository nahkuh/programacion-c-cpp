// Ejercicio R1: Promedio con repeticion controlada por contador
// |28sep2025| Cap03eg01PromedioCContador.c

#include <stdio.h>

int main(void){
    int total=0, contador = 1, calificacion=0; /*las variables deben inicializarse antes de ser usadas*/
    float promedio; /* y puedenden ser iniciadas despues de ser declaradas mediante una asignación*/

    while (contador <= 10){
        printf("Número: %d, Introduce calificación: ",contador);
        scanf("%d", &calificacion);
        total += calificacion;
        contador++;
        
    }
    promedio = (float) total/10; /*incluimos operador de conversión para que convierta los numeros de las variable y la operacion en punto flotante mientra preserva las variables enteras origen*/
    printf("Promedio: %f\n",promedio); 

    return 0;
}
