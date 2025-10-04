/* interes compuesto con (for) y (pow), aparte de la libreria estandar usaremos la librería matematica 1
   Cap04eg02InteresCompuesto.c | 4oct2025
*/

#include <stdio.h>
#include <math.h>

int main(void){
    double principal = 1000.0, tasa = 0.05, monto; /* Prescición (double)
                                                     de 15 a 16 digitos tamaño 8 bytes 
                                                     +-2.3x10^(-308) a 1.7x10^(308) */
    int anio;
    printf( "%4s | %17s\n________________________\n", "Anio", "Monto"); 
    /*
Especificador	Uso	Ejemplo	Salida
%d	    Enteros	            printf("%d", 25)	        25
%f	    Flotantes	        printf("%f", 3.14)	        3.140000
%s	    Cadenas	            printf("%s", "Hola")	    Hola
%20s	Cadena 20 chars	    printf("%20s", "Hola")	    Hola (16 espacios)
%-20s	Cadena izq.	        printf("%-20s", "Hola")	    Hola (16 espacios)
%.2f	2 decimales	        printf("%.2f", 3.14159)	    3.14
%10.2f	10 chars, 2 dec.    printf("%10.2f", 3.14159)	3.14 (6 espacios)
*/
    for( anio=0; anio<=10; anio++ ){
        monto = principal*pow(1.0 + tasa,anio);          /*función potencia pow, pow(double base, double exponente)*/
        printf("%d | %21.2f\n", anio, monto);
    }
    return 0;
}