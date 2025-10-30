/* Cap05ej00Funciones.c | 24oct2025 */
/* */

/* función potencia() por iteración ej 5.16 */

/*hay que llama a los encabezdos necesarios para que la funciones trabajen*/
#include "Cap05ej00Funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Cap05ej5.16Potencia.c en realidad potencia está aqui en el modulo de funciones */
/* Cap05ej5.16Potencia.c solo mandará llamar la función */
long potencia(long b /*base*/,long n /*exponente*/){
    int migaja=1;
    long x=b;
    switch(n){
        case 0: return 1; 
        case 1: return b;  
        default:
            for (size_t i = 0; i <= n; i++){
                
                if( i==0 ){
                      
                }else if(i==1){
                      
                }else{
                    b*=x;
                     
                }

            }
            return b;
    }
    
}

/* Cap05ej5.17Multiplo.c en realidad multiplo está aqui en el modulo de funciones */
/* Cap05ej5.17Multiplo.c solo mandará llamar la función */
long multiplo(long multiply, long factor){
    float racional=(float)multiply/factor;
    long entero=multiply/factor;
    static long i=0;
    printf("%ld ~ %ld | %d \n",racional,entero,i);
    if(racional==entero){
        return 1;
    }else if( i<1 ){
        i++;
        return multiplo(factor,multiply); 
    }else{
        return 0;
    }


}

/* Cap05ej5.18Impar.c en realidad impar está aqui en el modulo de funciones */
/* Cap05ej5.18impar.c solo mandará llamar la función */
int impar(int n){
    return (n%2==0)? 0: 1;
}


/* Cap05ej5.19Cuadrado.c en realidad cuadrado está aqui en el modulo de funciones */
/* Cap05ej5.19Cuadrado.c solo mandará llamar la función */
void cuadrado(int n /*lado o numero de asteriscos por lado*/){ /* cuadrado funcion iterativa dibuja cuadrado de (*) */
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("*");
        }

        printf("\n");
    }
}

/* Cap05ej5.25Minimode3.c en realidad minimo está aqui en el modulo de funciones */
/* Cap05ej5.25Minimode3.c solo mandará llamar la función */
long minimo( long x,long y, long z ){ /* calcula el minimo de 3 números */

    if(x<=y){
        if(x<=z)
            return x;
        return z;
    }else if(y<=z){
        return y;
    }else{
        return z;
    }    
    
}


/* Cap05ej5.28Alreves.c en realidad minimo está aqui en el modulo de funciones */
/* Cap05ej5.28Alreves.c solo mandará llamar la función */
long int alreves(long int n){
    //int i=1;
    double diez=(double)10;
    double d1 = (double)n;
    double d2;
    double d3;
    double d4=0;
    printf("n=%f y d1=%f\n",n,d1);
    while(d1*10!=0){
        d2=d1/10;
        d3=floor(d2);
        
        printf("\nd1=%f, d2=%f, d3=%f",d1, d2,d3);
        d1=d3;
        d2=d2-d3;
        d2*=100;
        d2=ceil(d2)/10;
        d2=floor(d2);
        printf(" | el sustraido %f, y el numero extraido: %f",d3,d2);
        d4*=10;
        d4+=d2;
        printf(" | %ld",(long)d4);
        //i++;

    }
    return d4;
}


/* Cap05ej5.29MCD.c en realidad MCD está aqui en el modulo de funciones */
/* Cap05ej5.29MCD.c solo mandará llamar la función */
/*Calcula el MAXIMO COMUN DIVISOR DE 2 ENTEROS*/
long MCD( long a, long b){
    long div=1;
    long ch=minimo(a,a,b);
    long gr=(ch==a)?b:a;
     
    
    for(int i=2; i<=ch; i++){
        while(multiplo(ch,i)==1 && multiplo(gr,i)==1){
                
            if(ch%i==0){
                ch/=i;
                gr/=i;
                div*=i;
            }
                

        }
            
        
    }

    return div;

}

/* Cap05ej5.30 Puntos.c en realidad MCD está aqui en el modulo de funciones */
/* Cap05ej5.30 Puntos.c solo mandará llamar la función */
/*para calcular la funcion puntos creamos la funcion promedio */



float promedio( int n ){
    float Promedio;
    float numero1;
    

    
    for( int i=1; i<=n; i++ ){
        
        
        printf("\n Introduce un un numero: ");

        scanf("%f",&numero1);
        Promedio= (Promedio + numero1);


       
        
    } 

    printf("Promedio= %f",Promedio=(Promedio)/n);
    return Promedio;

}

int puntos( float x ){
    int Puntos=0;
    x=(floor(x)+0.5<x)?floor(x):ceil(x);
    switch((int)x){
        case 100:
        case 99:
        case 98:
        case 97:
        case 96:
        case 95:
        case 94:
        case 93:
        case 92:
        case 91:
        case 90:
            Puntos=4; break;
        case 89:
        case 88:
        case 87:
        case 86:
        case 85:
        case 84:
        case 83:
        case 82:
        case 81:
        case 80:
            Puntos=3; break;
        case 79:
        case 78:
        case 77:
        case 76:
        case 75:
        case 74:
        case 73:
        case 72:
        case 71:
        case 70:
            Puntos=2; break;
        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
            Puntos=1; break;
        default: break;

    }

    return Puntos;

}


/* Cap05ej5.34PotenciaRc.c en realidad potencia está aqui en el modulo de funciones */
/* Cap05ej5.34PotenciaRc.c solo mandará llamar la función */
long potenciaRc(long b,long e){
    
    if(e==0)
        return 0;
    else if(e==1)
        return b;
    else{
        return b*potenciaRc(b,e-1);
    }    
}


/* Cap05ej5.29MCD.c en realidad MCD está aqui en el modulo de funciones */
/* Cap05ej5.29MCD.c solo mandará llamar la función */
/*Calcula el MAXIMO COMUN DIVISOR DE 2 ENTEROS*/
long MCDrc( long x, long y){
    if(y==0)
        return x;
    else{
        MCDrc(y,x%y);
    }
}