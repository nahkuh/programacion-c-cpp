/* biblioteca de las funciones de los ejercicios del capitulo 6
| Cap06ej00Funciones.h | 8nov2025 |
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Cap06ej00Funciones.h"






/*
suma los elementos de un arreglo | Cap06ej02SumaUnA.c | 10nov2025 | 
*/
double  sumaArreglo( double A[], int N ){

    double Total=0;

    for(int i=0; i<N; i++){
        Total+=A[i];
    }
    return Total;
}



/*
muestra ordenamiento descendente | Cap06ej03OrdenamientoB.c | 10nov2025 | 
*/
int ordenamientoBurbuja( int a[], int N, char selector[] ){
    
    char cadena[]="ascendente";

    int p;
    int i; /* contador de comparaciones */
    int almacena; /* ubicación temporal utilizada para el intercambio de
    elementos */
    int verdad;

    printf("%s ? %s\n",selector,cadena);
    for(i=0;i<11;i++){                              /*ciclo que sirve para comparar dos cadenas elemento por elemento */
        verdad=(selector[i]==cadena[i])?1:0;
        if(verdad==0){
            printf("%c ? %c | verdad=%d\n",selector[i],cadena[i],verdad);
            break;
            
        }
    }
    
      
    
    /* ordenamiento burbuja */
    /* ciclo para controlar el número de pasos */
    for ( p = 1; p < N; p++ ) {
    
    /* ciclo para controlar el número de comparaciones por pasada */
        for ( i = 0; i < N - 1; i++ ) {
    
        /* compara los elementos adyacentes y los intercambia si el primer
        elemento es mayor que el segundo */
            if (  (verdad)?a[ i ] > a[ i + 1 ]:a[ i ] < a[ i + 1 ] ) {
                almacena = a[ i ];
                a[ i ] = a[ i + 1 ];
                a[ i + 1 ] = almacena;
            } /* fin de if */
    
        } /* fin del for interno */
    
    } /* fin del for externo */
    
    //printf( "\nElementos de datos en orden %s & %s | %d\n",selector,cadena,verdad );
    
    /* muestra el arreglo ordenado */
    //for ( i = 0; i < N; i++ ) {
    //printf( "%4d", a[ i ] );
    //} /* fin de for */
    
    printf( "\n" );

    return 0; /* indica terminación exitosa */
}

/*
muestra busqueda lineal | Cap06ej04BusquedaL.c | 11nov2025 | 
*/
int busquedaLineal(int a[],int N, int llave){
    
    int i; /* contador de comparaciones */
    
    printf("\nla llave es %d\n",llave);
    /* busqueda lineal */
    /* ciclo para controlar de comparación */
   
    /* ciclo para controlar el número de comparaciones por pasada */
    for ( i = 0; i < N; i++ ) {

    /* compara los elementos uno a uno hasta que coincida  uno con la llave */
        if (  llave == a[i] ) {
            return i;
        } /* fin de if */

    } /* fin del for interno */

    return -1; /* indica terminación exitosa */
}

/*
muestra busqueda binaria | Cap06ej04BusquedaL.c | 11nov2025 | 
*/
int busquedaBinaria(int a[],int N, int llave){
   
    int alto=N; /* contador de comparaciones */
    int bajo=0;
    int central;

    //printf("\nla llave es %d\n",llave);
    /* busqueda lineal */
    /* ciclo para controlar de comparación */
   
    /* ciclo para controlar el número de comparaciones por pasada */
    while (bajo<=alto){
        central = ( bajo + alto ) / 2;
    /* compara los elementos uno a uno hasta que coincida  uno con la llave */
            if (  llave == a[central] ) {
                return central;
            } else if ( llave<a[central] ){
                alto = central - 1;
            } else{
                bajo = central + 1;
            }/* fin de if */

    }
    
    return -1; /* indica terminación exitosa */
}


/* 
simula una partida de 36k tiros de 2 dados | Cap06ej06TiraDados36k.c | 11nov2027 |
*/
void tira2Dados(int d[][DAD], int frec[][NUM] ){ /*  hay 2=DAD dados, y cada dado tiene NUM=6 caras */
    int i;
    int j;
    int Dado1;
    int Dado2;
    
   
    srand( time(NULL) );

    printf("Los datos son: \n");

    for( j=0; j<ENE; j++ ){  /* y lanzamos los dados 36000=ENE veces*/
            
        for( i=0; i<DAD; i++ ){ /*se lanzan 2 dados a la vez*/

            printf( "%2d, " , d[ j ][ i ] = rand() % NUM + 1 );
            
            if( i==0 )
                Dado1=d[j][i]-1;

            if( i==1 ){
                Dado2=d[j][i]-1;    
                ++frec[ Dado1 ][ Dado2 ];
            }
        }

        printf("    ");

        if( 9 == j % 10 )
            printf( "\n\n" );
            
    }

    


}

void histograma( int f[ ][ NUM ] , int F[] ){
    
    int acumula;
    printf("\n\n DADO1 | DADO2 | SUMA DE DADOS | FRECUENCIA  \n");
    for( int i=0 ; i<NUM; i++ ){
        
        for( int j=0; j<NUM; j++){
            printf("%4d   | %4d  | %7d       | %6d      ",i+1,j+1, acumula=i+1+j+1, f[i][j] );
            F[acumula-2]+=f[i][j];
            for( int k=1; k<=f[i][j]; k++ ){
                if( k != f[i][j] ){
                    printf("-");
                }else{ printf(">\n"); }
            }
            
        }    
        printf("\n");
    }
}


/* 
imprime una matriz de dim mXn con m,n en los Naturales | Cap06ej07Matrix.c | 11nov2027 |
*/
void imprimirMatriz(double M[][Columnas]){
    
       
    for( int i=0 ; i<Renglones; i++ ){
        
        for( int j=0; j<Columnas; j++ ){
         
            printf( "%5d  ",(int)M[i][j]);
        
        }
        printf("\n\n");
    }    

}


/*
Programa que toma una base de datos y calcula una estadistica 3M y frecuencias
| Cap06ej08Estadistico3MyF.c | 13nov2025 | 
*/
double promedio( int x[], int n ){

    
    double acumula;
   
    for( int i=0; i<n; i++ ){
        
        acumula += (double) x[i];

        
    }

    return (double)acumula/n;    

}

void frecuencia( int x[], int n, int F[], int m,  int RANGO[] ){
    
    int acumula=F[0];
    // int a[]={0};
    int k=0,j=0; /*contador especializado*/
    RANGO[0]=x[0];

    printf("\n\nentra F[0] = %d, x[0] = %d\n\n",F[0],x[0]);

    for( int i=0; i<n; i++ ){
        
        ++F[x[i]-1];
        if(i<n-2 && x[i]<x[i+1]){
            j++;
            RANGO[j]=x[i+1];
        }
        
    }
    printf("\n\nentra F[0] = %d, x[0] = %d\n\n",F[0],x[0]);
    if(x[n-2]<x[n-1]){
            j++;
            RANGO[j]=x[n-1];
    }


    printf("\n\nsale j=%d F[0] = %d, x[0] = %d\n\n",j,F[0],x[0]);

    printf("\n\n [   Datos   ] | FRECUENCIA  \n");
    for( int i=0; i<m; i++ ){
               
        printf(" %7d       | %6d      ",RANGO[i],F[i]);
        for(k=0;k<=F[i];k++){
            if(  k == F[i] ){
                printf(">");
            }else{ printf("-"); }
        }       
        printf("\n");
    }

}

void moda( int F[], int m , int MODAS[], int RANGO[] ){

    int i;
    int j;
    int grande=0;
    int peque;
    printf("\n\n\n%d %d %d %d",F[0],m,MODAS[0],RANGO[0]);
    for( i=0; i<m; i++ ){

        if(F[i]>grande){
            grande=F[i];
        }

    }
    printf("\n\ngrande=%d\n\n",grande);
    printf("\n");
    for( i=0; i<m; i++ ){

        if(F[i]==grande){
            printf("Moda = %d, ",MODAS[i]=RANGO[i]);
        }else{
            MODAS[i]=0;
        }

    }
    printf("\n");

}

int mediana( int x[], int n ){

    if(n%2==1){
        return x[(n+1/2)-1];
    }else{
        return x[n/2-1];
    }
    
}



/*
muestra busqueda binaria recursiva | Cap06ej09BusquedaBinRe.c | 19nov2025 | 
*/
int busquedaBinariaRec( int a[], int i, int N,  int llave1){
   
    int alto=N; /* contador de comparaciones */
    int bajo=i;
    int central;

    //printf("\nla llave es %d\n",llave);
    /* busqueda lineal */
    /* ciclo para controlar de comparación */
   
    /* en vez de ciclo para controlar el número de comparaciones por pasada se hacen llamadas recursivas*/
    
        central = ( bajo + alto ) / 2;
    /* compara los elementos uno a uno hasta que coincida  uno con la llave */
            if (  llave1 == a[central] ) {
                printf("\na[%d]=%d<=a[%d]=%d<=a[%d]=%d\n",bajo,a[bajo],central,a[central],alto,a[alto]);
                return central;

            } else if ( llave1<a[central] ){

                alto=central-1;

                printf("\na[%d]=%d<=a[%d]=%d<=a[%d]=%d\n",bajo,a[bajo],central,a[central],alto,a[alto]);
                
                return busquedaBinariaRec(a,bajo,alto,llave1);   //alto = central - 1;

            } else{

                bajo=central+1;

                printf("\na[%d]=%d<=a[%d]=%d<=a[%d]=%d\n",bajo,a[bajo],central,a[central],alto,a[alto]);
                
                return busquedaBinariaRec(a,bajo,alto,llave1);    //bajo = central + 1;

            }/* fin de if */

    
    
    return -1; /* indica terminación exitosa */
} 

/* 
Este programa calcula el valor de un determinante de 3x3 | Cap06ej10Determinante3x3.c | 19nov2025 |
*/
double Determinante( double x[][Columnas],int m){
    m=Renglones;
    int n=Columnas;
    int signo;
    double pivote;

    double dif;
    double a1;
    double a2;
    double b1;
    double b2;
    

    for( int j=0; j<m; j++ ){
        signo=(j%2==0)?1:-1;
        pivote=signo*x[0][j];
       
        if(j==0){
            a1=x[1][1];      
            b1=x[2][1];         /* a1 a2  */
            a2=x[1][2];         /* b1 b2 */
            b2=x[2][2];
        }
        if(j==1){
            a1=x[1][0];
            b1=x[2][0];
            a2=x[1][2];
            b2=x[2][2];
        }
        if(j==2){
            a1=x[1][0];
            b1=x[2][0];
            a2=x[1][1];
            b2=x[2][1];
        }
        dif+=pivote*(a1*b2-a2*b1);

        

    }
    return dif;
}









