/* Este procedimiento solo hace llamar a la funcion Multiplo() que progrmamos usando un if then en
   Cap05ej00Funciones.c | 27oct2025
*/

#include <stdio.h>
#include <math.h>
#include "Cap05ej00Funciones.h"

int main(void){

    long int numero1;
   

    char respuesta[]="s";
    char si[]="s"; 
    printf("\n\nRespuesta %s = %s es %s\n\n", respuesta, si, (respuesta[0]==si[0])?"verdadero":"falso");
    /* a dos arreglos puedes comparar sus componentes pero de entrada
    c los concidera distintos porque los define por su dirección en memoria, por lo que
    2 arreglos no pueden ser iguales, pero sus elementos si y si se pueden comparar */
    while ( respuesta[0]==si[0] || respuesta[0]=='S' ){
        printf("escribe un numero que quieras escribir alreves: ");
        scanf("%ld",&numero1);

        printf("\n\n%ld alreves es %ld" ,numero1,alreves(numero1));

        printf("\n\n quieres escribir otro numero alreves, escribe (s) para si, y (n) para no: ");
        scanf("%s",  respuesta);

        /* code */
    }
    

}
