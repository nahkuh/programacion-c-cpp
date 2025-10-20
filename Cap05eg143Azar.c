/*
El jugador tira dos dados. Cada dado tiene seis caras. Estas caras contienen 1, 2, 3, 4, 5 y 6 puntos. Una vez que
los dados caen, se calcula la suma de los puntos que se encuentran en las caras que ven hacia arriba. Si la su-
ma es igual a 7 u 11 en el primer tiro, el jugador gana. Si la suma es 2, 3 o 12 en el primer tiro (llamado “craps”),
el jugador pierde (es decir, la “casa” gana). Si la suma es 4, 5, 6, 8, 9, o 10 en el primer tiro, entonces la suma
se convierte en el “punto” del jugador. Para ganar, usted debe continuar tirando los dados hasta que “haga su
punto”. El jugador pierde si tira un 7 antes de hacer su punto.
| Cap05eg143Azar.c | 18oct2025 |
*/

#include <stdio.h>     /* contiene los prototipos de la función printf y scanf */
#include <stdlib.h>    /* contiene los prototipos de la función rand() y srand() */
#include <time.h>      /* comtieme el prototipo de la función time() */
#include "Cap05eg00Funciones.h" /* Que contiene el prototipo de la función tiraDados() y de todas las funciones ejemplo de este capítulo */

/* Constantes de enumeración que representan el estado del juego */
enum Estatus { CONTINUA, GANA, PIERDE };

int main(void){
    int suma;     /* suma del tiro de dados */
    int miPunto;  /* punto ganado */

    enum Estatus estatusJuego; /* puede contener CONTINUA, GANA o PIERDE */

    /* randomiza el generador de números aleatorios mediante la función time */
    srand( time(NULL) );

    suma = tiraDados();

    /* determina el estado del juego basado en la suma de los dados */
    switch (suma){
        /* gana el primer tiro */
        case 7:
        case 11:
            estatusJuego = GANA;
            break;
        /* pierde en el primer tiro */
        case 2:
        case 3:
        case 12:
            estatusJuego = PIERDE;
            break;
        /* recuerda el punto */ 
        default:
            estatusJuego = CONTINUA;
            miPunto = suma;
            printf( "Su punto es %d\n", miPunto );
            break; /* opcional */
    }

    /* mientras el juego no se complete */
    while ( estatusJuego==CONTINUA ){
        suma = tiraDados(); /* tira de nuevo los dados */
        /* determina el estatus del juego */
        if( suma==miPunto ){ /* gana por punto */
            estatusJuego = GANA;  /* fin del juego, el jugador gana */
        }
        else{

            if( suma==7 ){ /* pierde al tirar 7 */
                estatusJuego=PIERDE; /* termina el juego el jugador pierde */
            }
        }

    }
    /* despliega mensaje de triunfo o derrota */
    if( estatusJuego==GANA ){ /* ¿Ganó el jugador? */
        printf( "El jugador gana \n");
    }else{ /* el jugador pierde */
        printf("El jugador pierde\n");
    }

    return 0;

}