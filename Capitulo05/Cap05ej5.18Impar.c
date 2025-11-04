/* Este procedimiento solo hace llamar a la función impar() que progrmamos usando un if then en
   Cap05ej00Funciones.c | 27oct2025
*/

#include <stdio.h>
#include "Cap05ej00Funciones.h"

int main(void){

    int numero1;
    

    char respuesta[]="s";
    char si[]="s"; 
    printf("\n\nrespuesta %s = %s es %s\n\n", respuesta, si, (respuesta[0]==si[0])?"verdadero":"falso");
    /* a dos arreglos puedes comparar sus componentes pero de entrada
    c los concidera distintos porque los define por su dirección en memoria, por lo que
    2 arreglos no pueden ser iguales, pero sus elementos si y si se pueden comparar */
    while ( respuesta[0]==si[0] || respuesta[0]=='S' ){
        printf("Escribe un numeros para saber si es impar: ");
        scanf("%d",&numero1);

        printf("%ld %s \n",/*1*/numero1,/*2*/(impar(numero1)==1)?"es impar":"es par"/*2*/);

        printf("\n\n quieres saber si algun otro numero es impar, escribe (s) para si, y (n) para no: ");
        scanf("%s",  respuesta);

        /* code */
    }
    

}
