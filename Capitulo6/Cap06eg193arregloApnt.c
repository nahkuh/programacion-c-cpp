/* El nombre de un arreglo es lo mismo que &arreglo[ 0 ] | Cap06eg193arregloApnt.c | 04oct2025 */
#include <stdio.h>

int main(void){
    char arreglo[5]; /* define un arreglo de 5 elementos */
 
    printf( " arreglo = %p\n&arreglo[0] = %p\n"
            " &arreglo = %p\n",
            arreglo, &arreglo[ 0 ], &arreglo );

    return 0; /* indica terminación exitosa */

}