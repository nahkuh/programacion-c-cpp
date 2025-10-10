/*           Conteo de calificaciones con switch, 
usa la función de la biblioteca estandar getchar() para capturar un caracter desde el teclado,
|Cap04eg03CuentaCalificaciones.c|4oct2025
*/
#include <stdio.h>

int main(void){
    
    int calificacion=0;
    int cuentasA=0, cuentasB=0, cuentasC=0, cuentasD=0, cuentasF=0;
    printf("Introduzca la letra correspondiente a la calificacion, usa las letras estandar A B C D F\n");
    printf("Introduzca la secuencia EOF para terminar la entrada de datos.\n");

    while(calificacion!=EOF){
        switch (calificacion=getchar())
        {
        case 'A': case 'a': ++cuentasA; break;
        case 'B': 
        case 'b':
            ++cuentasB;
            break;
        case 'C': case 'c': ++cuentasC; break;
            case 'D': 
            case 'd': 
                ++cuentasD; 
                break;
            case 'F': case 'f': ++cuentasF; break;   
                /* code */
            case  ' ':
            case '\n':
            case '\t':
                break;
                // atrapa los demás carácteres
            default: printf("Introdujo la letra equivocada. Introduzca de nuevo una calificación\n");
                break; // la instrucción default tiene un break implícito, así que ponerselo es opcional.
        }
    
    }
    printf("Los totales de calificacion son:\nA: %d\nB: %d\nC: %d\nD: %d\nF: %d\n",cuentasA,cuentasB,cuentasC,cuentasD,cuentasF);
    
    return 0;
}