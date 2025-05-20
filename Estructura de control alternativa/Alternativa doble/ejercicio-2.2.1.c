/*
	Para otorgar un préstamo, un banco evalúa el sueldo del solicitante. Si el sueldo es mayor o igual a 
	$100000, se autoriza un préstamo de hasta $300000. Para sueldos inferiores, sólo se autoriza un 
	préstamo de hasta el 75% de sus ingresos. El banco desea tener un programa que permita ingresar el 
	monto del sueldo del solicitante y muestre en pantalla una leyenda indicando el monto de préstamo 
	autorizado. 
	
	Método de resolución de problemas:
		Objetivo: Mostrar monto del prestamo autorizado en base a sueldo
		Estrategia:
			1.ingresarDatos
			2.mostrarResultado
				2.1.evaluarPrestamo
				
	Casos de prueba: 
		Sueldo   | Resultado
		 10000   |  7500
		 100000  |	300000	
		 52042   |	39031.50
*/

// Bibliotecas
#include <stdio.h>

// Prototipado
void inicializarVariables();
void ingresarDatos();
void evaluarPrestamo();
void mostrarResultado();

// Variables globales
float sueldo;

// Función principal
int main(){
	inicializarVariables();
 	ingresarDatos();
 	mostrarResultado();

	return 0;
}

// Funciones
void inicializarVariables(){
	sueldo = 0;
}

void ingresarDatos(){
	printf("Ingrese su sueldo: ");
	scanf("%f", &sueldo);
}

void evaluarPrestamo(){
	if (sueldo >= 100000){
		printf("Prestamo hasta: $300000");
	} else {
		printf("Prestamo hasta: $%.2f", sueldo * 0.75);
	}
}

void mostrarResultado(){
	printf("Sueldo: $%.2f\n", sueldo);
	evaluarPrestamo();
}




