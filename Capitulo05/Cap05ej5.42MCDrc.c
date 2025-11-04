/* Este procedimiento solo hace llamar a la funcion MCDrc() que progrmamos usando iteración en
   Cap05ej00Funciones.c | 29oct2025
*/

#include <stdio.h>
#include "Cap05ej00Funciones.h"

int main(void){

    long numero1;
    long numero2;

    char respuesta[]="s";
    char si[]="s"; 
    printf("\n\nrespuesta %s = %s es %s\n\n", respuesta, si, (respuesta[0]==si[0])?"verdadero":"falso");
    /*a dos arreglos puedes comparar sus componentes pero de entrada
    c los concidera distintos porque los define por su dirección en memoria, por lo que
    2 arreglos no puedens ser iguales, pero sus elementos si y si se pueden comparar */
    while ( respuesta[0]==si[0] || respuesta[0]=='S' ){
        printf("Escribe 2 numeros para calcular su MAXIMO COMUN DIVISOR: ");
        scanf("%ld%ld",&numero1,&numero2);

        printf("MCD(%ld,%ld) =  %ld",numero1,numero2,MCDrc(numero1,numero2));

        printf("\n\n quieres calcular otra potencia, escribe (s) para si, y (n) para no: ");
        scanf("%s",  respuesta);

        /* code */
    }
    

}

