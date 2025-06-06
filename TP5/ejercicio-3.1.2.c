/*
  3.1.2. Calcular e informar el promedio de los números impares menores o iguales a 20.
  *Nota: En este programa es conveniente declarar una
  constante para el valor 20. En C, una forma de declarar y
  definir una constante es usando la directiva #define seguido
  de un nombre (en el ejemplo: N) y luego de un espacio, el
  valor que se desea asignar a la constante (en el ejemplo: 20):

  Método de resolución de problemas
    Objetivo: Calcular y mostrar el promedio de los numeros impares
    Estatégia:
      1.mostarResultado
        1.1.promediarValores

  Casos de prueba:
  ===
    Cantidad de números enteros: 20
    Cantidad de impares: 10
    Suma impares: 100
    Promedio impares: 10.00
  ===
    Cantidad de números enteros: 50
    Cantidad de impares: 25
    Suma impares: 625
    Promedio impares: 25.00
  ===
    Cantidad de números enteros: 500
    Cantidad de impares: 250
    Suma impares: 62500
    Promedio impares: 250.00
  ===
*/

// Librerias
#include <stdio.h>

// Constantes
#define MAX 20

// Prototipado
void mostrarResultado();
float promediarValores(float, int);

// Función principal
int main() {
  mostrarResultado();
  return 0;
}

// Funciónes
float promediarValores(float pValores, int cantValores) {
  return pValores / cantValores;
}

void mostrarResultado() {
  int sumaImpares = 0;
  int cantValores = 0;
  int i;
  for (i = 1; i <= MAX; i++) {
    if (i % 2 != 0) {
      sumaImpares += i;
      cantValores++;
    }
  }

  printf("Cantidad de impares: %d \n", cantValores);
  printf("Suma impares: %d \n", sumaImpares);
  printf("Promedio impares: %.2f \n", promediarValores(sumaImpares, cantValores));
}