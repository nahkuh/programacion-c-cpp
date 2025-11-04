/*
Inicializa los elementos de un arreglo del 2 en 2 hasta el 20 | Cap06eg182IniArrange2to20.c | 03nov2025 |
*/

#include <stdio.h>
#define TAMANIO 10

int main(){

/* usamos la constante simbolica TAMANIO para especificar el tamaño del arreglo */
int s[TAMANIO];
int j;           /*contador*/

/* Inicializa los elementos del arreglo asignandole a cada sucesor n un 2(n+1)*/
for(j=0;j<TAMANIO;j++){
    s[j]=2*(j+1);
}

printf("%s%13s\n","Elemento","Valor");

/*tabula los elementos del arreglo */

for(j=0;j<TAMANIO;j++){
    printf("%7d%13d\n",j,s[j]);
}

return 0;

}