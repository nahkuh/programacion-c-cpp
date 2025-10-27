/* Cap05ej00Funciones.c | 24oct2025 */
/* */

/* función potencia() por iteración ej 5.16 */

/*hay que llama a los encabezdos necesarios para que la funciones trabajen*/
#include "Cap05ej00Funciones.h"
#include <stdio.h>
#include <stdlib.h>

/* Cap05ej5.16Potencia.c en realidad potencia está aqui en el modulo de funciones */
/* Cap05ej5.16Potencia.c solo mandará llamar la función */
long potencia(long b /*base*/,long n /*exponente*/){
    int migaja=1;
    long x=b;
    switch(n){
        case 0: return 1; 
        case 1: return b;  
        default:
            for (size_t i = 0; i <= n; i++){
                
                if( i==0 ){
                      
                }else if(i==1){
                      
                }else{
                    b*=x;
                     
                }

            }
            return b;
    }
    
}

