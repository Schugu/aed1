/*
        2.4.1. Una farmacia desea emitir el ticket de compra en función de la
   cantidad y precio del producto vendido, y el tipo de producto (P-Perfumería,
   F-Farmacia y L-Limpieza). Necesita una aplicación para calcular el valor de
   la compra, aplicando una bonificación de acuerdo con el tipo de producto:
   Perfumería 5%, Farmacia 10%, Limpieza 15%. El ticket debe mostrar el importe
   a pagar y el porcentaje de bonificación, con la leyenda "% bonificado: XX".
        *Nota: Recordar el carácter de escape.

        Método de resolución de problemas:
                Objetivo: imprimir un ticket con descuento
                Estrategia:
                        1.ingresarPrecio
                        2.mostrarTotal
                                2.1.aplicarDescuento

        Casos de pruebas:
        Precio      Tipo de producto
        ===
        24           P
        Precio del producto: $24.00
        % bonificado: 5.00%
        Total a pagar con descuento: $22.80
        ===
        100         F
        Precio del producto: $100.00
        % bonificado: 10.00%
        Total a pagar con descuento: $90.00
        ===
        2000        l
        Precio del producto: $2000.00
        % bonificado: 15.00%
        Total a pagar con descuento: $1700.00
        ===
*/

// Librerias
#include <stdio.h>
#include <ctype.h> 

// Constantes
#define PERFUMERIA 5
#define FARMACIA 10
#define LIMPIEZA 15

// Prototipado
void inicializarVariables();
void ingresarPrecio();
float aplicarDescuento(float, float);
void mostrarTotal();

// Variables globales
float precio;
char tipoProducto;

// Función principal
int main() {
  inicializarVariables();
  ingresarPrecio();
  mostrarTotal();

  return 0;
}

// Funciones
void inicializarVariables() {
  precio = 0;
}

void ingresarPrecio() {
  printf("Ingrese el precio: ");
  scanf("%f", &precio);

  printf("Ingrese el tipo de producto (P: Perfumeria, F: Farmacia, L: Limpieza): ");
  fflush(stdin);
  scanf(" %c", &tipoProducto);
  tipoProducto = toupper(tipoProducto);
}

float aplicarDescuento(float pPrecio, float pDescuento) {
  return pPrecio * (1 - pDescuento / 100);
}

void mostrarTotal() {
  float totalConDescuento = 0;

  printf("Precio del producto: $%.2f \n", precio);

  switch (tipoProducto) {
  case 'P':
    totalConDescuento = aplicarDescuento(precio, PERFUMERIA);
    printf("%% bonificado: %.2f%% \n", (float)PERFUMERIA);
    break;
  case 'F':
    totalConDescuento = aplicarDescuento(precio, FARMACIA);
    printf("%% bonificado: %.2f%% \n", (float)FARMACIA);
    break;
  case 'L':
    totalConDescuento = aplicarDescuento(precio, LIMPIEZA);
    printf("%% bonificado: %.2f%% \n", (float)LIMPIEZA);
    break;
  default:
    totalConDescuento = precio;
    printf("%% bonificado: %.2f%% \n", (float)0);
    break;
  }

  printf("Total a pagar con descuento: $%.2f \n", totalConDescuento);
}
