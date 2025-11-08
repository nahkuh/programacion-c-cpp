/*
Implementación de la biblioteca de funciones
archivo definicion de funciones
Cap06eg00Funciones.c|03nov2025|*/

#include "Cap06eg00Funciones.h"
#include <stdio.h>
#include <stdlib.h>


/* Cap06eg191Astatic.c */
/* funcion con arreglo local estático*/
void iniciaArregloEstatico(void){
    static int arreglo1[ 3 ];            /* Inicia el arreglo[] a cero la primera vez que se llama a la función */
    int i;                              /* contador */

    printf("\nValores al entrar a iniciaArregloEstatico:\n");

    /* muestra el arreglo1 */
    for(i=0; i <= 2; i++){
        printf("arreglo1[%d] =%d ",i, arreglo1[i]);

    }

    printf("\nValores al salir de iniciaArregloEstatico:\n");

    /* modificamos el contenido del arreglo1*/
    for(i=0; i <= 2; i++){
        printf("arreglo1[%d]= %d  ", i, arreglo1[i]+=5);
    }

}

/* funcion con arreglo local automático */
void iniciaArregloAutomatico(void){
    int arreglo2[ 3 ]={1,2,3};            /* Inicia el arreglo[] cada vez que se llama a la función */
    int i;                              /* contador */

    printf("\nValores al entrar a iniciaArregloAutomatico:\n");

    /* muestra el arreglo1 */
    for(i=0; i <= 2; i++){
        printf("arreglo2[%d] =%d ",i, arreglo2[i]);

    }

    printf("\nValores al salir de iniciaArregloAutomatico:\n");

    /* modificamos el contenido del arreglo1*/
    for(i=0; i <= 2; i++){
        printf("arreglo2[%d]= %d  ", i, arreglo2[i]+=5);
    }
    
}

/* Cap06eg194ArreglosAfunciones.c */
/* prototipos de las funciones PASA ARREGLOS */
/* en la función modificaArreglo, "b" apunta al arreglo original "a" en memoria */
void modificaArreglo( int b[], int tamanio ){
        int j; /* contador */

    /* multiplica cada elemento del arreglo por 2 */
    for ( j = 0; j < tamanio; j++ ) {
    b[ j ] *= 2;
    } /* fin de for */
    
} /* fin de la función modificaArreglo */

/* en la función modificaElemento, "e" es una copia local del elemento a[ 3 ]
del arreglo se pasó desde main */
void modificaElemento( int e ){
/* multiplica el parámetro por 2 */
    printf( "El valor en modificaElemento es %d\n", e *= 2 );
} /* fin de la función modificaElemento */



/*Cap06eg196CaliFconst.c*/
/* en la función intentaModifElArreglo, el arreglo b es const, por lo tanto
no puede ser
utilizado para modificar el arreglo original a en main. */
void intentaModifElArreglo(  const int b[] ){

    //b[ 0 ] /= 2; /* error */
    //b[ 1 ] /= 2; /* error */
    //b[ 2 ] /= 2; /* error */

}


/*Cap06eg204BusquedaLineal.c*/
/* compara la llave con cada elemento del arreglo hasta que localiza el elemento o 
   hasta que alcanza el final del arreglo; devuelve el subíndice del elemento 
   si lo encontró o -1 si no lo encontró */
int busquedaLineal( const int arreglo[], int llave, int tamanio ){
    int n; /* contador */

    /* ciclo a través del arreglo */
    for ( n = 0; n < tamanio; ++n ) {

        if ( arreglo[ n ] == llave ) {
            return n; /* devuelve la ubicación de la llave */
        } /* fin de if */

    } /* fin de for */

    return -1; /* llave no encontrada */

}

/* Cap06eg206BusquedaBinarea.c */
int busquedaBinaria( const int b[], int claveDeBusqueda, int bajo, int alto, int tamanio ){
    int central; /* variable para mantener el elemento central del arreglo */

    /* realiza el ciclo hasta que el subínice bajo es mayor que el subíndice alto */
    while ( bajo <= alto ) {

        /* determina el elemento central del subarreglo en el que se busca */
        central = ( bajo + alto ) / 2;

        /* despliega el subarreglo utilizado en este ciclo */
        despliegaLinea( b, bajo, central, alto, tamanio );

        /* si claveDeBusqueda coincide con el elemento central, devuelve central */
        if ( claveDeBusqueda == b[ central ] ) {
            return central;
        } /* fin de if */

        /* si claveDeBusqueda es menor que el elemento central, establece el
        nuevo valor de alto */
        else if ( claveDeBusqueda < b[ central ] ) {
            alto = central - 1; 
        } /* fin de else if */

        /* si claveDeBusqueda es mayor que el elemento central, establece el
        nuevo valor para bajo */
        else {
            bajo = central + 1; /* busca en la mitad superior del arreglo */
        } /* fin de else */

    } /* fin de while */

    return -1; /* no se encontró claveDeBusqueda */

} /* fin de la función busquedaBinaria */

/* Imprime un encabezado para la salida */
void despliegaEncabezado( int tamanio ){
    int i; /* contador */

    printf( "\nSubindices:\n" );

    /* muestra el encabezado de la columna */
    for ( i = 0; i < tamanio; i++ ) {
        printf( "%3d ", i );
    } /* fin de for */

    printf( "\n" ); /* comienza la nueva línea de salida */

    /* muestra una línea de caracteres - */
    for ( i = 1; i <= 4 * tamanio; i++ ) {
        printf( "-" );
    } /* fin de for */

    printf( "\n" ); /* inicia una nueva línea de salida */
} /* fin de la función despliegaEncabezado */

/* Imprime una línea de salida que muestra la parte actual del arreglo que se está procesando. */
void despliegaLinea( const int b[], int baj, int cen, int alt, int tamanio ){
    int i; /* contador para la iteración a través del arreglo b */

    /* ciclo a través del arreglo completo */
    for ( i = 0; i < tamanio; i++ ) {

        /* despliega espacios si se encuentra fuera del rango actual del subarreglo */
        if ( i < baj || i > alt ) {
            printf( " " );
        } /* fin de if */
        else if ( i == cen ) { /* despliega el elemento central */
            printf( "%3d*", b[ i ] ); /* marca el valor central */
        } /* fin de else if */
        else { /* despliega otros elementos en el subarreglo */
            printf( "%3d ", b[ i ] );
        } /* fin de else */

    } /* fin de for */

    printf( "\n" ); /* inicia la nueva línea de salida */
} /* fin de la función despliegaLinea */





/* Cap06eg210AmultiDim.c */
/* Despliega arreglo multidimensional  */
/* función para mostrar un arreglo con dos filas y tres columnas */
void despliegaArreglo ( const int a[][ 3 ] ){

    int i; /* contador de filas */
    int j; /* contador de clumnas */

    /* ciclo a través de las filas */
    for ( i = 0; i <= 1; i++ ) {

        /* muestra los valores de las columnas */
        for ( j = 0; j <= 2; j++ ) {
            printf( "%d ", a[ i ][ j ] );
        } /* fin del for interno */

        printf( "\n" ); /* comienza la nueva línea de salida */
    } /* fin del for externo */

}





/* Cap06eg213A2Subindice.c */
/* Despliega arreglo de doble subindice */
void DespliegaArreglo( const int calificaciones[][ EXAMENES1 ], int alumnos, int examenes ){

    int i; /* contador de estudiantes */
    int j; /* contador de examenes */

    /* muestra el encabezado de las columnas */
    printf( "                             [0]  [1]  [2]  [3]" );

    /* muestra las calificaciones en forma tabular */
    for ( i = 0; i < alumnos; i++ ) {

        /* muestra la etiqueta de la fila */
        printf( "\ncalificacionesEstudiantes[%d] ", i );
        /* muestra las calificaciones de un estudiante */
        for ( j = 0; j < examenes; j++ ) {
            printf( "%-5d", calificaciones[ i ][ j ] );
        } /* fin del for interno */
    } /* fin del for externo */

} /* fin de la función despliegaArreglo */


/* Encuentra la calificación mínima */
int minimo( const int calificaciones[][ EXAMENES1 ], int alumnos, int examenes ){

    int i; /* contador de estudiantes */
    int j; /* contador de examenes */
    int califBaja = 100; /* inicializa a la calificación más alta posible */

    /* ciclo a través de las filas de calificaciones */
    for ( i = 0; i < alumnos; i++ ) {

        /* ciclo a través de las columnas de calificaciones */
        for ( j = 0; j < examenes; j++ ) {

            if ( calificaciones[ i ][ j ] < califBaja ) {
                califBaja = calificaciones[ i ][ j ];
            } /* fin de if */

        } /* fin del for interno */

    } /* fin del for externo */

    return califBaja; /* devuelve la calificación mínima */ 

}


/* Encuentra la calificación más alta */
int maximo( const int calificaciones[][ EXAMENES1 ], int alumnos, int examenes ){

    int i; /* contador de estudiantes */
    int j; /* contador de examenes */
    int califAlta = 0; /* inicializa a la calificación más baja posible */

    /* ciclo a través de las filas de calificaciones */
    for ( i = 0; i < alumnos; i++ ) {

        /* ciclo a través de las columnas de calificaciones */
        for ( j = 0; j < examenes; j++ ) {

            if ( calificaciones[ i ][ j ] > califAlta ) {
                califAlta = calificaciones[ i ][ j ];
            } /* fin de if */

        } /* fin del for interno */

    } /* fin del for externo */

    return califAlta; /* devuelve la calificación máxima */

}


/* Determina la calificación promedio para un estudiante en especial */
double promedio( const int conjuntoDeCalificaciones[], int examenes ){

    int i; /* contador de exámenes */
    int total = 0; /* suma de las calificaciones del examen */
    /* total de calificaciones de un estudiante */
    for ( i = 0; i < examenes; i++ ) {
        total += conjuntoDeCalificaciones[ i ];
    } /* fin de for */

    return ( double ) total / examenes; /* promedio */

}

