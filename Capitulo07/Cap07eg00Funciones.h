/*libreria deVHeaders de las funciones del Capitulo 7*/

#ifndef CAP07EG00FUNCIONES_H
#define CAP07EG00FUNCIONES_H

/* CONSTANTES SIMBÓLICAS */


/* HEADERS */
int cuboPorValor( int n ); /* prototipo  funcion que eleva al cubo para probar una llamada a una funcion con argumentos pasados por valor*/

void cuboPorReferencia( int *ptrN ); /* prototipo funcion que eleva al cubo para probar una llamada a una funcion con argumentos pasados por refernencia*/

void convierteAMayusculas( char *ptrS ); /* prototipo apuntador ptrs NO CONSTANTE a dato *ptrs NO CONSTANTE */

void imprimeCaracteres( const char *ptrS ); /* prototipo apuntador ptrs SI CONSTANTE a dato *ptrs NO CONSTANTE */

#endif