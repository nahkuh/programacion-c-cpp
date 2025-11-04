/*
Implementación de la biblioteca de funciones
archivo headers
Cap05eg00Funciones.h|16oct2025|*/

#ifndef CAP05EG00FUNCIONES_H
#define CAP05EG00FUNCIONES_H

/*lista de ctes simbolicas se  dejaron en main */
//enum Estatus { CONTINUA, GANA, PIERDE };




/*lista de funciones header*/


int cuadrado( int ); 
int maximo( int, int , int);
int tiraDados( void );

void usoLocal( void ); /* prototipo de función */
void usoStaticLocal( void ); /* prototipo de función */
void usoGlobal( void ); /* prototipo de función */

 

/* funciones recursivas */
/*factorial*/
long factorial ( long );


   /* definicion recursiva de la función version de nofai de fibonacci */
   long nofai( long );




#endif // CAP05EG00FUNCIONES_H