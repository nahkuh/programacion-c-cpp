/*
Inicializa un arreglo con una lista| Cap06eg181IniArrangeList.c | 3nov2025 |
*/

#include <stdio.h>

int main(void){
     
    /*en la siguiente declaración del arreglo, 
      iniciaremos el arreglo con la siguiente lista de inicialización*/
    int n[10]={ 32, 27,64, 18, 95, 14, 90, 70, 60, 37 };
    int i; /*contador*/

    printf("%s%13s\n","Elemento","Valor");
    /* tabulacion del arreglo */
    for(i=0;i<10;i++){
        printf("%7d%13d\n",i,n[i]);
    }

    return 0;

}