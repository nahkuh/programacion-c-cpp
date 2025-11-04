/* Este procedimiento solo hace llamar a la funcion potencia() que progrmamos usando iteración en
   Cap05ej00Funciones.c | 26oct2025
*/

#include <stdio.h>
#include "Cap05ej00Funciones.h"

int main(void){

    long base;
    long exponente;

    char respuesta[]="s";
    char si[]="s"; 
    printf("\n\nrespuesta %s = %s es %s\n\n", respuesta, si, (respuesta[0]==si[0])?"verdadero":"falso");
    /*a dos arreglos puedes comparar sus componentes pero de entrada
    c los concidera distintos porque los define por su dirección en memoria, por lo que
    2 arreglos no puedens ser iguales, pero sus elementos si y si se pueden comparar */
    while ( respuesta[0]==si[0] || respuesta[0]=='S' ){
        printf("Escribe una base, ahora un exponente\n");
        scanf("%ld%ld",&base,&exponente);

        printf("%ld^(%ld) = %ld",base,exponente,potencia(base,exponente));

        printf("\n\n quieres calcular otra potencia, escribe (s) para sí, y (n) para no: ");
        scanf("%s",  respuesta);

        /* code */
    }
    

}
