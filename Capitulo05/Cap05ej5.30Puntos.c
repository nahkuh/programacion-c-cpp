/* Este procedimiento solo hace llamar a la funcion MCD() que progrmamos usando iteración en
   Cap05ej00Funciones.c | 29oct2025
*/

#include <stdio.h>
#include <math.h>
#include "Cap05ej00Funciones.h"

int main(void){

    
    float Promedio;
    long limiteMaximo;
    int n;
    char respuesta[]="s";
    char si[]="s"; 
    printf("\n\nrespuesta %s = %s es %s\n\n", respuesta, si, (respuesta[0]==si[0])?"verdadero":"falso");
    /*a dos arreglos puedes comparar sus componentes pero de entrada
    c los concidera distintos porque los define por su dirección en memoria, por lo que
    2 arreglos no puedens ser iguales, pero sus elementos si y si se pueden comparar */
    while ( respuesta[0]==si[0] || respuesta[0]=='S' ){
        printf("Escribe el numero maximo en la escala de calificacion: ");
        scanf("%ld",&limiteMaximo);
        printf("Escribe el numero de puntos o calificaciones a evaluar n=");
        scanf("%d",&n);
        printf("Introduce las calificaciones de un alumno : \n");
        Promedio=promedio(n);
       
        Promedio; 
        printf("El promedio sin filtro: %f, #puntos %d MaxCalificacion %ld | %f ~ %f\n", Promedio, n, limiteMaximo, floor(Promedio)+0.5,Promedio);
        
        Promedio = (Promedio * 100)/limiteMaximo; /*Promedio es float, 100 es int, limiteMaximo es long */
        /*para el promedio de 100%, (Promedio * 100)/limiteMaximo=100.0000, pero,
                                    Promedio * (100/limiteMaximo)=99.0000
                                    ¡por lo que el ORDEN DE OPERACIONES C y la conversión de números si importa! */
        printf("El promedio es: %f, #puntos %d MaxCalificacion %ld\n", Promedio, n, limiteMaximo);
        Promedio = (floor(Promedio)+0.5<=Promedio)?ceil(Promedio):floor(Promedio);
        printf("El promedio al 100 es: %f, #puntos %d MaxCalificacion %ld\n", Promedio, n, limiteMaximo);

          
        printf("Los puntos del alumno son  %d\n",puntos(Promedio));

        printf("\n\n quieres evaluar los puntos de otro alumno, escribe (s) para si, y (n) para no: ");
        scanf("%s",  respuesta);

        /* code */
    }
    

}
