// Ejercicio R3: Analisis De Resultados
// |28sep2025| Cap03eg03AnalisisResultados.c

#include <stdio.h>

int main(void){
    int aprobados=0, reprobados = 0, resultado=0, estudiante=0; /* las variables deben inicializarse antes de ser usadas */
    
    while (resultado != -1){ /* el valor centinela es -1 para salir del ciclo de captura */
        printf("Número: %d, \nIntroduce Resultado 1 para aprobado, 0 para reprobado ó -1 para salir: ",estudiante+1);
        scanf("%d", &resultado);
        if(resultado != -1){ 
            if(resultado==1){ 
                aprobados++;
                estudiante++;
            }
            if(resultado==0 ){
                reprobados++;
                estudiante++;
            }
        }
    }
    if(resultado!=0){
        printf("Aprobados: %d, Reprobados: %d\n", aprobados, reprobados);
        if((float)aprobados*100/estudiante>8) printf("Objetivo alcanzado \n"); 
    }else{
        printf("No se introdujeron Resultados\n");
    }
    return 0;
}