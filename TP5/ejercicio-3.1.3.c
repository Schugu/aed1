/*
  3.1.3. Generar y mostrar la tabla de multiplicar de un número introducido por el teclado.

  Método de resolución de problemas
    Objetivo: Generar y mostrar la tabla de multuplicar de un número ingresado
    Estatégia:
      1.ingresarNúmero
      2.mostarTabla


  Casos de prueba:
  ===
  Núm 10
  10 x 0 = 0
  10 x 1 = 10
  10 x 2 = 20
  10 x 3 = 30
  10 x 4 = 40
  10 x 5 = 50
  10 x 6 = 60
  10 x 7 = 70
  10 x 8 = 80
  10 x 9 = 90
  10 x 10 = 100
  ===
*/

// Librerias
#include <stdio.h>

// Prototipado
void inicializarVariables();
void ingresarNum();
void mostrarTabla();

// Variables globales
int num;

// Función principal
int main() {
  inicializarVariables();
  ingresarNum();
  mostrarTabla();
  
  return 0;
}

// Funciónes
void inicializarVariables() {
  num = 0;
}

void ingresarNum() {
  printf("Ingrese un numero entero: ");
  scanf("%d", &num);
}

void mostrarTabla() {
  int i;
  for (i = 0; i <= num; i++) {
    printf("%d x %d = %d \n", num, i, (num * i));
  }
}