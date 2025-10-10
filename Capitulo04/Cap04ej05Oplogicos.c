/*
Evalúe expresiones lógicas con &&, ||, ! y determine su valor (0 o 1).
→ Practica: operadores lógicos, precedencia, evaluación cortocircuitada.
Suponga que i=1, j=2, k=3 y m=2. ¿Qué imprimen cada una de las siguientes instrucciones?
a) printf( “%d”, j==1 );
b) printf( “%d”, j==3 );
c) printf( “%d”, i >= 1 && j < 4 );
d) printf( “%d”, m >= 99 && k < m );
e) printf( “%d”, j >= i || k == m );
f) printf( “%d”, k + m < j || 3 – j >= k );
g) printf( “%d”, !m );
h) printf( “%d”, !( j – m ) );
i) printf( “%d”, !( k > m ) );
j) printf( “%d”, !( j > k ) );

| Cap04ej05Oplogicos.c | 6oct2025
*/

#include <stdio.h>

int main(void){
    int i=1, j=2, k=3, m=2; 

    printf( "falso?     %d\n", j==1 );
    printf( "falso?     %d\n", j==3 );
    printf( "verdadero? %d\n", i >= 1 && j < 4 );
    printf( "falso?     %d\n", m >= 99 && k < m );
    printf( "verdadero? %d\n", j >= i || k == m );
    printf( "falso?     %d\n", k + m < j || 3 - j >= k );
    printf( "falso?     %d\n", !m );
    printf( "verdadero? %d\n", !( j - m ) );
    printf( "falso?     %d\n", !( k > m ) );
    printf( "verdadero? %d\n", !( j > k ) );


    return 0;
}