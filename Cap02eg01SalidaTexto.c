// Ejemplo 1: Salida de Texto | 26sep2025 | Cap02eg01SalidaTexto.c

#include <stdio.h> /*directiva de preprocesamiento con llamado a la directiva estandar*/
 
/*la funcion main inicia la ejecución del programa*/
int main(void){ /* int indica que la salida de main es un numero entero, 
                   void en ingles significa vacio y en C significa que la funcion no recibira argumentos,
                   se puede obviar y dejar  vacio "int main()"="int main(void)" */    
    
    printf("bienvenido a C!\n"); /* función de salida, imprime en pantalla,
                                    con secuencia de escape "\n" que significa
                                    nueva linea */
    return 0; /* indica la salida de la funcion main
                 que en particular el valor "0" en el retorno de la funcion main
                 le indica al sistema operativo que el programa fianliza correctamente
                  */
}