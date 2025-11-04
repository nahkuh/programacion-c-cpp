/*
Figura 5.12: fig05_12.c
Ejemplo de alcance 
 En un programa, cada identificador tiene los atributos clase de almacenamiento, duración del almacenamiento, alcance y
vinculación.
• C proporciona cuatro clases de almacenamiento indicadas mediante los especificadores de clase de almacenamiento:
auto, register, extern y static.
• La duración de almacenamiento de un identificador se refiere al tiempo de existencia de un identificador en memoria.
• El alcance de un identificador se refiere al lugar en el que se puede hacer referencia a un identificador dentro del programa.
• La vinculación de un identificador determina, para un programa con múltiples archivos fuente, si un identificador es
reconocido sólo en el archivo fuente actual o en cualquier archivo fuente mediante las declaraciones apropiadas.
| Cap05eg149ClassAlmacenamiento.c | 19oct2025 |
*/

#include <stdio.h>
#include "Cap05eg00Funciones.h"
int x=1;/* variable global con alcance de Archivo 
 LA LLEVAMOS AL ARCHIVO | Cap05eg00Funciones.c solo declarando extern int x; y no lo delcaramos en el
  hearder (.h) para no ocacionar multiples registros que nos lleven a error  de esta maner le daremos alcance a main*/

int main(void){
    
    int x = 5;  /* variable local en main */

    printf( "la x local en el alcance de main es %d\n", x );

    { /* comienza el nuevo alcance */
        int x = 7; /* variable local con nuevo alcance*/
        printf( "la x local en bloque interno de main es %d\n", x );
    }

    printf( "la x local en el alcance de main es %d\n", x );

    int i=0; /*contador*/
    do{
        usoLocal(); /* usoLocal contiene una x local, cada vez que se entra a la función,
                    a reinicia la variable local de la función  */
        usoStaticLocal(); /* usoStaticLocal contiene una x local estática, la primera ves que se entra
                    a la función se inicializa pero no vuelve a hacerlo, y cuando vuelve a entrar, la
                    variable static en vez de volverse a inicializar procesa el ultimo valor previo */
        usoGlobal(); /* usoGlobal utiliza una x global, la variable global tambien retiene su valor previo */
        i++;    
    }while( i<3 );
    printf( "\nx local en main es %d\n", x );


    
    return 0;
}