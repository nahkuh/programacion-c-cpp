// Ejemplo 3: Comparación de DOS enteros. | 26sep20225

#include <stdio.h>

int main(void){

    int num1, num2;

    printf("Introduce 2 enteros para compararlos:\n");
    scanf("%d%d", &num1, &num2);
    if(num1==num2) printf("%d es igual que %d \n", num1, num2);
    if(num1!=num2) printf("%d es diferente que %d \n", num1, num2);
    if(num1<num2) printf("%d es menor que %d \n", num1, num2);
    if(num1>num2) printf("%d es mayor que %d \n", num1, num2);
    if(num1<=num2) printf("%d es menor o igual que %d \n", num1, num2);
    if(num1>=num2) printf("%d es mayor o igual que %d \n", num1, num2);


    return 0;
}