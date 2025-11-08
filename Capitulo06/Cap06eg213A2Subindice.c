/*
    Ejemplo de arreglo de doble subindice | Cap06eg213A2Subindice.c | 7nov2025 |
*/

#include <stdio.h>
#include "Cap06eg00Funciones.h"


int main(void){

    int estudiante; /* contador de estudiantes */

    /* inicializa las calificaciones para tres estudiantes (filas) */
    const int calificacionesEstudiantes[ ESTUDIANTES1 ][ EXAMENES1 ] =
    { { 77, 68, 86, 73 },
      { 96, 87, 89, 78 },
      { 70, 90, 86, 81 } };

    /* muestra el arreglo calificacionesEstudiantes */
    printf( "El arreglo es:\n" );
    DespliegaArreglo( calificacionesEstudiantes, ESTUDIANTES1, EXAMENES1 );

    /* determina el valor más pequeño y el valor más grande de las
    calificaciones */
    printf( "\n\nCalificacion mas baja: %d\nCalificacion mas alta: %d\n",
    minimo( calificacionesEstudiantes, ESTUDIANTES1, EXAMENES1 ),
    maximo( calificacionesEstudiantes, ESTUDIANTES1, EXAMENES1 ) );

    /* calcula el promedio de calificaciones de cada estudiante */
    for ( estudiante = 0; estudiante < ESTUDIANTES1; estudiante++ ) {
    printf( "El promedio de calificacion del estudiante %d es %.2f\n",
    estudiante, promedio( calificacionesEstudiantes[ estudiante ],
    EXAMENES1 ) );
    } /* fin de for */

    return 0; /* indica terminación exitosa */

}