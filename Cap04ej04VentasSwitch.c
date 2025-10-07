/*
Una empresa de ventas por correo vende cinco productos diferentes cuyos precios de lista mostramos en la siguien-
te tabla:
Número de producto Precio de lista
1 cafe      $2.98
2 capuchino $4.50
3 cuernito  $9.98
4 chocolate $4.49
5 bisquete  $6.87
Escriba un programa que lea una serie de pares de números de la siguiente manera:
a) Número de producto.
b) Cantidad vendida durante el día.
Su programa debe utilizar una instrucción switch para ayudar a determinar el precio de lista de cada producto.
Su programa debe calcular y desplegar el valor total de venta de todos los productos vendidos la semana pasada.
| Cap04ej04VentasSwitch.c | 5oct2025 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float venta=0, precio;
    int n=1, cantidad;
    char cod;
      // Reservar memoria dinámica para la cadena producto
    char *producto = malloc(50 * sizeof(char));
    
    if (producto == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        return 1;
    }
    printf("haz una venta\n");
    while( cod != 'c' ){
        printf("Introduce el codigo de producto o <c> para hacer la cuenta: ");
        switch (cod=getchar())
        {
        case '1':
            precio = 2.98;
            producto = "cafe"; 
            /* code */
            break;
        case '2':
            precio = 4.50;
            producto = "capuchino"; 
            /* code */
            break;
        case '3':
            precio = 9.98;
            producto = "cuernito"; 
            /* code */
            break;
        case '4':
            precio = 4.49;
            producto = "chocolate"; 
            /* code */
            break;
        case '5':
            precio = 6.87;
            producto = "bisquete"; 
            /* code */
            break;
        
        default:
            break;
        }
        if( cod=='1' || cod=='2' || cod=='3' || cod=='4' || cod=='5' ){
        
        printf(" ahora la cantidad: \n");
        scanf("%d", &cantidad);
        printf("#%d codigo %c %s precio $%.2f cantidad %d, Subtotal $%.2f cuenta parcial $%.2f\n",n,cod,producto,precio,cantidad,(float)cantidad*precio,venta+=(float)precio*cantidad);
                //                                                           1  2   3        4      5          6
        ++n;
        }else{
            printf("hay un ruido en cod %c \n",cod);

            continue;
        }

    }
    printf("Total = %.2f\n",venta);

    return 0;
}