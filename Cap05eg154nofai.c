/* version de Nofai de fibonacci recursiva
   | Cap05eg154nofai.c | 21oct2025 */
   #include <stdio.h>
   #include "Cap05eg00Funciones.h"

   int main(void){
      int i; /* Contador */

      /* repite 11 veces; durante cada iteración, 
      calcula el factorial( i ) y despliega el resultado */
      for( i=0; i<=10; i++ ){
         printf( "%d  ", i );
         printf( "fibnacci(%2d) = %ld\n",i, nofai(i));
         }

      return 0;

   }


   