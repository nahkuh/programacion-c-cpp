/* Ejercicio 4.31
   Imprima un rombo de asteriscos usando ciclos anidados.
   → Practica: for anidado, control de formato.
 |Cap04ej06AsterRombo.c|7oct2025
*/

#include <stdio.h>

int main(void){
    int n;

    printf("Dame un numero impar Natural, ");
    scanf("%d",&n);

    for(int i=1; i <= n; ++i){
        //printf("%d",i);
        for(int j=1; j <= n; ++j){
            if( j<=(n-1)/2+(1-i) && i<(n-1)/2+1 ) printf(" ");
            if( (n-1)/2+(1-i)<j && j<=n-((n-1)/2+(1-i)) && i<=(n-1)/2+1 )  printf("*");

            if( j<=i-((n-1)/2+1) && (n-1)/2+1<i ) printf(" ");
            if( i-((n-1)/2+1)<j && j<=n-(i-((n-1)/2+1)) && (n-1)/2+1<i )  printf("*");
           
        }
        printf("\n");
    }


}