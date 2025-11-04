/* Este procedimiento solo hace llamar a la funcion Multiplo() que progrmamos usando un if then en
   Cap05ej00Funciones.c | 27oct2025
*/

#include <stdio.h>
#include "Cap05ej00Funciones.h"

int main(void){

    long numero1;
    long numero2;

    char respuesta[]="s";
    char si[]="s"; 
    printf("\n\nrespuesta %s = %s es %s\n\n", respuesta, si, (respuesta[0]==si[0])?"verdadero":"falso");
    /* a dos arreglos puedes comparar sus componentes pero de entrada
    c los concidera distintos porque los define por su dirección en memoria, por lo que
    2 arreglos no pueden ser iguales, pero sus elementos si y si se pueden comparar */
    while ( respuesta[0]==si[0] || respuesta[0]=='S' ){
        printf("Escribe 2 numeros para saber si uno es multiplo del segundo: ");
        scanf("%ld%ld",&numero1,&numero2);

        printf("%ld %s %ld\n",/*1*/(numero1>=numero2)?numero1:numero2/*1*/,/*2*/(multiplo(numero1,numero2)==1)?"es multiplo":"no es multiplo"/*2*/,/*3*/(numero1>=numero2)?numero2:numero1/*3*/);

        printf("\n\n quieres saber si otros 2 son multiplos uno del otro, escribe (s) para sí, y (n) para no: ");
        scanf("%s",  respuesta);

        /* code */
    }
    

}
