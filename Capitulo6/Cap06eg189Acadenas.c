/*
Manipulación de arreglos como cadenas | Cap06eg189Acadenas.c | 04oct2025 |
*/

#include <stdio.h>

int main(void){

    char cadena1[20];                       /*reserva 20 caracteres*/
    char cadena2[] = "literal de cadena";    /*reserva 18 caracteres*/
    int i;                                            /* contador */

    printf("Introduce una cadena: ");
    scanf( "%s", cadena1 ); /* acuerdate que la captura finaliza cuando scanf recibe un espacio en blanco */

    /* muestra las cadenas */
    printf("La cadena1 es: %s\ncadena2 es: %s\n"
            "La cadena1 con espacios entre caracteres es:\n",
            cadena1,cadena2);


    /* imprime elemento por elemento de la cadena1 */
    for( i=0; cadena1[i]!='\0'; i++ ){
        printf( "%c ", cadena1[i]);
    }
    printf("\n");

    return 0;
}