/*
Implementación de la biblioteca de funciones
archivo headers
Cap06eg00Funciones.h|03nov2025|*/

#ifndef CAP06EG00FUNCIONES_H
#define CAP06EG00FUNCIONES_H

/*lista de ctes simbolicas se  dejaron en main */

#define ESTUDIANTES1 3
#define EXAMENES1 4


//enum Estatus { CONTINUA, GANA, PIERDE };

/*lista de funciones header*/

/* Cap06eg191Astatic.c */
/* funcion con arreglo local estático*/
void iniciaArregloEstatico(void);
/* funcion con arreglo local automático */
void iniciaArregloAutomatico(void);

/* Cap06eg194ArreglosAfunciones.c */
/* prototipos de las funciones PASA ARREGLOS */
void modificaArreglo( int b[], int tamanio );
void modificaElemento( int e );


/*Cap06eg196CaliFconst.c*/
/* en la función intentaModifElArreglo, el arreglo b es const, por lo tanto
no puede ser
utilizado para modificar el arreglo original a en main. */
void intentaModifElArreglo( const int b[] );


/*Cap06eg204BusquedaLineal.c*/
/* compara la llave con cada elemento del arreglo hasta que localiza el elemento o 
   hasta que alcanza el final del arreglo; devuelve el subíndice del elemento 
   si lo encontró o -1 si no lo encontró */
int busquedaLineal( const int arreglo[], int llave, int tamanio );



/* Cap06eg206BusquedaBinarea.c */
int busquedaBinaria( const int b[], int claveDeBusqueda, int bajo, int alto, int tamanio );
/* Imprime un encabezado para la salida */
void despliegaEncabezado( int tamanio );
/* Imprime una línea de salida que muestra la parte actual del arreglo que se está procesando. */
void despliegaLinea( const int b[], int baj, int cen, int alt, int tamanio );



/* Cap06eg210AmultiDim.c */
/* Despliega arreglo multidimensional  */
void despliegaArreglo ( const int a[][ 3 ] ); /* prototipo de la función */



/* Cap06eg213A2Subindice.c */
/* Despliega arreglo de doble subindice */
void DespliegaArreglo( const int calificaciones[][ EXAMENES1 ], int alumnos, int examenes );

/* Encuentra la calificación mínima */
int minimo( const int calificaciones[][ EXAMENES1 ], int alumnos, int examenes );

/* Encuentra la calificación más alta */
int maximo( const int calificaciones[][ EXAMENES1 ], int alumnos, int examenes );

/* Determina la calificación promedio para un estudiante en especial */
double promedio( const int conjuntoDeCalificaciones[], int examenes );

int psValExamenes( const int );









#endif