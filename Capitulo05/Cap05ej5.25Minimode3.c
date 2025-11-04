/* Este procedimiento solo hace llamar a la funcion Multiplo() que progrmamos usando un if then en
   Cap05ej00Funciones.c | 27oct2025
*/

#include <stdio.h>
#include "Cap05ej00Funciones.h"

int main(void){

    long numero1;
    long numero2;
    long numero3;

    char respuesta[]="s";
    char si[]="s"; 
    printf("\n\nrespuesta %s = %s es %s\n\n", respuesta, si, (respuesta[0]==si[0])?"verdadero":"falso");
    /* a dos arreglos puedes comparar sus componentes pero de entrada
    c los concidera distintos porque los define por su dirección en memoria, por lo que
    2 arreglos no pueden ser iguales, pero sus elementos si y si se pueden comparar */
    while ( respuesta[0]==si[0] || respuesta[0]=='S' ){
        printf("Escribe 3 numeros para saber cual es el minimo de los 3: ");
        scanf("%ld%ld%ld",&numero1,&numero2,&numero3);

        printf("%ld = minimo( %ld, %ld, %ld  )\n",minimo(numero1,numero2,numero3),numero1,numero2,numero3);

        printf("\n\n quieres saber el minimo de otros 3 numeros, escribe (s) para si, y (n) para no: ");
        scanf("%s",  respuesta);

        /* code */
    }
    

}
