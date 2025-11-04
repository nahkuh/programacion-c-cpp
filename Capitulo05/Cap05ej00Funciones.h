/* hay que crear los encabezados del modulo de funciones del capitulo 5
|Cap05ej00Funciones.h| 26oct2025
*/

/* si está definido el procedimiento en algún otro lugar no lo incluyas para
no crear errores de multiplicidad #indef 
"si no está definido NOMBRE_H, Entonces #define NOMBRE_H" */
#ifndef CAP05EJ00FUNCIONES_H
#define CAP05EJ00FUNCIONES_H

/*lista de funciones header*/
long potencia(long/*base*/,long/*exponente*/);

long multiplo(long/*multiplo*/,long/*factor*/);

int impar(int n); /**/

void cuadrado(int /*lado o numero de asteriscos por lado*/); /* cuadrado funcion iterativa */

long minimo(long ,long , long); 

long int alreves( long int );

long MCD( long, long);

float promedio( int );

int puntos( float );

long potenciaRc(long/*base*/,long/*exponente*/);

long MCDrc( long, long);

#endif // CAP05EJ00FUNCIONES_H
