// Ejemplo 2: Suma de dos enteros | 26sep2025 | Cap02eg02Suma2Enteros.c

/* el punto y coma(semicolon), sirve para indicarle al compilador que una secuencia de instrucción terminó 
   Se le conoce como "terminador de sentencias"(;|statement terminator or instruction terminator) */

#include <stdio.h> //#include es una instruccion para el precompilador NO DEBE LLEVAR ";"

int main(void){
    int entero1, entero2, suma; /*declaramos las variables enteras con las que trabajaremos */
   
    printf("Introduzca el primer entero \n");
    scanf("%d", &entero1);

    printf("Introduzca el segundo entero \n");
    scanf("%d", &entero2);

    suma = entero1 + entero2;
    printf("La suma es %d\n", suma);


    return 0;

} /* las llaves no deben llevar ";" */