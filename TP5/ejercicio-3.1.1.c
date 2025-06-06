/*
  3.1.1. Mostrar los números enteros desde 1 hasta N, sumarlos e informar la suma.

  Método de resolución de problemas
    Objetivo: Mostrar números enteros y su suma
    Estatégia:
      1.ingresarCantNum
      2.mostarNums

  Casos de prueba:
  Num: 5        Suma total: 15
  Num: 100      Suma total: 5050
  Num: 1000     Suma total: 500500
*/

// Librerias
#include <stdio.h>

// Prototipado
void inicializarVariables();
void ingresarCantNum();
void mostrarNums();

// Variables globales
int cantNum;

// Función principal
int main() {
  inicializarVariables();
  ingresarCantNum();
  mostrarNums();

  return 0;
}

// Funciónes
void inicializarVariables() {
  cantNum = 0;
}

void ingresarCantNum() {
  printf("Ingese un numero entero: ");
  scanf("%d", &cantNum);
}

void mostrarNums() {
  int sumaTotal = 0;
  int i;
  for (i = 1; i <= cantNum; i++) {
    printf("Numero: %d\n", i);
    sumaTotal += i;
  }

  printf("Suma total: %d \n", sumaTotal);
}