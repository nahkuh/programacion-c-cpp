/* Figura 5.3: fig05_03.c
 02 Creación y uso de una función definida por el usuario
 | Cap05eg131SintaxisFuncion.c | 16oct2025 */

 #include <stdio.h>
 #include "Cap05eg00Funciones.h"

 // int cuadrado( int y ); /* prototipo de la función */

 int main(void){
    
    int x; // contador
    /* repite 10 veces el ciclo y calcula e imprime el cuadro de x */
    for( x=1; x<=10; x++){
        printf("%d ",cuadrado(x)); /* llamada a la funcion */
    }
    printf( "\n" );

    return 0;
 }

 /* Definición de la función cuadrado */
 //int cuadrado( int y ){
//
 //   return y*y;
 //}

 //las funciones estan en la biblioteca del capitulo