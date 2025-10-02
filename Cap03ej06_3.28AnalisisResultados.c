/*Modifique el programa de resultados (aprobado/reprobado) para que solo acepte 1 o 2. 
Si el usuario ingresa otro valor, vuelva a pedirlo. |
|Cap03ej06_3.28AnálisisResultado.c| 1oct2025
*/
// Ejercicio R3: Analisis De Resultados
// |28sep2025| Cap03eg03AnalisisResultados.c

#include <stdio.h>

int main(void){
    int aprobados=0, reprobados = 0, resultado=0, estudiante=0; /* las variables deben inicializarse antes de ser usadas */
    int bandera=0;
    while (resultado != -1){ /* el valor centinela es -1 para salir del ciclo de captura */
        
        printf("Número: %d, \nIntroduce Resultado 1 para aprobado, 2 para reprobado ó -1 para salir: ",estudiante+1);
        scanf("%d", &resultado);
            
            if(resultado==1) bandera=resultado;
            if(resultado==2) bandera=resultado;
            if(resultado==-1) bandera=resultado;
            while(bandera!=resultado){
                printf("Error, vuelve introducir 1 para aprobado, 2 para reprobado ó -1 para salir: ");
                scanf("%d", &resultado);
                if(resultado==1) bandera=resultado;
                if(resultado==2) bandera=resultado;
                if(resultado==-1) bandera=resultado;
            }
        
        if(resultado != -1){ 
            if(resultado==1){ 
                aprobados++;
                estudiante++;
            }
            if(resultado==2 ){
                reprobados++;
                estudiante++;
            }
        }
    }
    if(resultado!=0){
        printf("Numero de Estudiantes: %d, Aprobados: %d, Reprobados: %d\n", estudiante, aprobados, reprobados);
        if((float)aprobados*10/estudiante>8) printf("Objetivo alcanzado \n"); 
    }else{
        printf("No se introdujeron Resultados\n");
    }
    return 0;
}