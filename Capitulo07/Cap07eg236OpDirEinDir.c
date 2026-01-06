/* Figura 7.4: fig07_04.c
02 Uso de los operadores & y * 
| Cap07eg236OpDirEinDir.c | 26nov2025 | 
*/
#include <stdio.h>

int main(){
    int x; /* a es un entero */
    int *ptrx; /* ptrA es un apuntador a un entero */

    x = 5;
    ptrx = &x; /* ptrA toma la dirección de a */

    printf( "La direccion de x es %p"
            "\nEl valor de ptrx es %p", &x, ptrx );

    printf( "\n\nEl valor de x es %d"
            "\nEl valor de *ptrx es %d", x, *ptrx );

    printf( "\n\nMuestra de que * y & son complementarios "
            "uno del otro\n&*ptrx = %p"
            "\n*&ptrx = %p\n", &*ptrx, *&ptrx );

    return 0; /* indica terminación exitosa */
}