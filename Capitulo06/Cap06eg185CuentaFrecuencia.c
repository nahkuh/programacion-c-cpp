/*
Cuenta la frecuencia en los puntos o datos de una lista de números|Cap06eg185CuentaFrecuencia.c|04nov2025|
*/

#include <stdio.h>
#define TAMANIO_RESPUESTA 40 /* Define los tamaños de los arreglos */
#define TAMANIO_FRECUENCIA 11

int main(void){
    int respuesta; /*cuenta los puntos de la encuesta*/
    int rango;     /*contador de rangos de 1 al 10*/

    /*inicializa contadores de frecuencia a 0 */
    int frecuencia[TAMANIO_FRECUENCIA]={0};

    /*coloca las respuestas del examen dentro del arreglo respuestas*/
    int respuestas[TAMANIO_RESPUESTA]={1,2,6,4,8,5,9,7,8,10,  1,6,3,8,6,10,3,8,2,7,  6,5,7,6,8,6,7,5,6,6,  5,6,7,5,6,4,8,6,8,10 };

    /*para cada respuesta, selecciona el valor de un elemento del arreglo
      respuestas y utiliza dicho valor como subíndice en el arreglo frecuencia para determinar el elemento a incrementar*/
    for(respuesta=0;respuesta<TAMANIO_RESPUESTA;respuesta++){
    ++frecuencia[ respuestas[ respuesta ] ];
    }

    /*ahora desplegamos resultados mediante la siguiente tabulación*/
    
    /*encabezado de la tabulación*/
    printf("%s%17s\n","Rango","Frecuencia");
    /*tabulación*/
    for(rango=1;rango<TAMANIO_FRECUENCIA;rango++){        
        printf("%6d%17d\n",rango,frecuencia[rango]);
    }

    return 0;
}







