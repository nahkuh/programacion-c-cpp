/* headers de las funciones de los ejercicios del capitulo 6
| Cap06ej00Funciones.h | 8nov2025 |
*/

#ifndef CAP06EJ00FUNCIONES_H
#define CAP06EJ00FUNCIONES_H

/*lista de ctes simbolicas se  dejaron en main */
#define Net 100

#define ENE 3600
#define NUM 6
#define DAD 2

#define Renglones 5
#define Columnas 4

#define RUL 10000
#define DOM 100






//enum Estatus { CONTINUA, GANA, PIERDE };

/*lista de funciones header*/

/*
suma los elementos de un arreglo | Cap06ej02SumaUnA.c | 10nov2025 | 
*/
double  sumaArreglo( double A[], int N );

/*
muestra ordenamiento descendente | Cap06ej03OrdenamientoB.c | 10nov2025 | 
*/
int ordenamientoBurbuja(int a[],int N, char selector[]);

/*
muestra busqueda lineal | Cap06ej04BusquedaL.c | 11nov2025 | 
*/
int busquedaLineal(int a[],int N, int llave);
    
/*
muestra busqueda binaria | Cap06ej04BusquedaL.c | 11nov2025 | 
*/
int busquedaBinaria(int a[],int N, int llave);

/* 
simula una partida de 36k tiros de 2 dados | Cap06ej06TiraDados36k.c | 11nov2027 |
*/
void tira2Dados(int d[][DAD], int frec[][NUM] );

void histograma(int f[][NUM],  int F[] );


/* 
imprime una matriz de dim mXn con m,n en los Naturales | Cap06ej07Matrix.c | 11nov2027 |
*/
void imprimirMatriz(int M[][Columnas]);

/*
Programa que toma una base de datos y calcula una estadistica 3M y frecuencias
| Cap06ej08Estadistico3MyF.c | 13nov2025 | 
*/
double promedio( int x[], int n );

void frecuencia( int x[], int n, int F[], int m , int RANGO[]);

void moda( int F[], int m , int MODAS[], int RANGO[] );

int mediana( int x[], int n );


#endif