/* Calcule km/l por tanque y promedio total usando -1 como centinela.
  | Cap03ej03km.c | 30sep2025

  Los conductores están preocupado por el kilometraje obtenido en sus automóviles. Un conductor mantiene el
registro de muchos llenados de tanque de gasolina mediante el registro de miles de kilómetros conducidos y los
litros empleados durante cada llenado del tanque. El programa debe calcular y desplegar los kilómetros por litro
obtenidos durante cada llenado de tanque. Después de procesar toda la información, el programa debe calcular y
desplegar los kilómetros por litro combinados de todos los llenados de tanque. He aquí un ejemplo del diálogo de
entrada/salida:                                                        
------------------------------------------------------------
|Introduzca los litros utilizados (-1 para terminar): 12.8 |
|Introduzca los kilómetros conducidos: 287                 |
|Los kilómetros por litro de éste tanque fueron 22.421875  |
------------------------------------------------------------                                                    */

#include <stdio.h>

int main(void){
    int contador=0; /* las variables deben inicializarse antes de ser usadas */
    float km=0, L = 0, total_km = 0, total_L=0;
    float promedio; /* y puedenden ser iniciadas despues de ser declaradas mediante una asignación */

    while (L != -1){ /* el valor centinela es -1 para salir del ciclo de captura */
        printf("Llenado de tanque Numero: %d, Introduzca los litros utilizados (-1 para terminar): ",contador+1);
        scanf("%f", &L);

        if(L != -1){ 

            printf("Llenado de tanque Numero: %d, Introduzca los kilometros conducidos: ",contador+1);
            scanf("%f", &km);

            total_L += L;
            total_km+= km;
            promedio=km/L;
            printf("Llenado de tanque Numero: %d, Los kilometros por litro de este tanque fueron: %f(km/L)\n\n",contador+1,promedio);
            contador++;

        promedio = total_km/total_L; /* incluimos operador de conversión para que convierta los numeros de las variable y la operacion en punto flotante mientra preserva las variables enteras origen*/

        } 
        
    }
    printf("___________________________________________________________________________________________________________________\n");
    if(contador!=0){
        promedio = total_km/total_L; /* incluimos operador de conversión para que convierta los numeros de las variable y la operacion en punto flotante mientra preserva las variables enteras origen*/
        printf("Los kilometros recorridos en total fueron: %f(km)\n",total_km);
        printf("Los y los litros de gasolina gastados fueron: %f(L)\n",total_L);
        printf("Los kilometros por litro de éste auto fueron en Promedio: %f(km/L)\n",promedio); 
    }else{
        printf("No se introdujeron datos\n");
    }
    return 0;
}