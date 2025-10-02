/* Lea 10 números y determine el mayor usando solo 3 variables: 
contador
numero 
meyor
| Cap03ej05_3.24numMayor.c | 1oct2025 
*/

#include <stdio.h>

int main(void){

    int contador=1, numero=0, mayor=0;
    
    while(contador<=10){
        printf("Entrada %d | introdusce un número entero: ",contador);
        scanf("%d",&numero);
        if(1==contador) mayor=numero;
        if(numero>mayor){
            mayor=numero;
        }
        printf("\nNumero mayor: %d hata esta entrada numero %d\n",mayor,contador);
        contador++;
    }
    printf("\n\nEl numero mayor introducido es: %d\n\n\n",mayor);

    return 0;
}