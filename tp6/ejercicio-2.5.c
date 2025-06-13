/*
        Grupo 4
        2.5. Escribir un programa que determine si una cadena es un palíndromo, es decir, si se puede leer de izquierda 
		a derecha y viceversa. Por ejemplo: “ANILINA”, “RADAR”.

		Métdo ode resolución de problemas: 
		Objetivo: Determinar si una palabra es palindromo o no
		Estragegia:
			1.ingresarPalabra
			2.mostrarResultado
				2.1.determinarPalindromo
*/

// Librerias
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Tipos
typedef char tString[50];

// Prototipado
void ingresarPalabra();
int determinarPalindromo(tString pPalabra);
void mostrarResultado();

// Variables globales
tString palabra;

// Función principal
int main() {
	ingresarPalabra();
  	mostrarResultado();

  	return 0;
}

// Funciones
void ingresarPalabra() {
  	printf("Ingrese una palabra: ");
  	fflush(stdin);
  	scanf("%49[^\n]", palabra);
}

int determinarPalindromo(tString pPalabra) {
  	tString palabra;
  	tString palabraInvertida;
  	int len = strlen(pPalabra);


  	for (int i = 0; i < len; i++) {
    	palabraInvertida[i] = palabra[len - 1 - i];
  	}

	if (strcmp(palabra, palabraInvertida) == 0) {
		return 1;
	} else {
		return 0;
	}
}

void mostrarResultado() {
	if (determinarPalindromo(palabra) == 1) {
		printf("La cadena '%s' es un palindromo.\n", palabra);
	} else {
		printf("La cadena '%s' no es un palindromo.\n", palabra);
	}
}
