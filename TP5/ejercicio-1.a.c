/*
	Diseñe un algoritmo que emita el ticket con el importe a pagar 
	en un supermercado considerando los datos: cantidad y precio 
	del producto. Imprimir el ticket tomando como referencia el 
	diseño de este ticket de ejemplo:
 		Cant. unidades: 5 - Precio unit.: $ 10.50  
		Total: $ 52.50 
		¡Gracias por su compra!
	
	Método de resolución de problemas:
		Objetivo: Imprimir un ticket de compra conciderando los datos cantidad y precio.
		Estrategia: 
			1.ingresarDatos
			2.procesarDatos
			3.imprimirTicket
			
	Casos de prueba: 
		Cant. unidades | Precio unit. | Total
		  24		   |   2.5        |   60
		  10		   |   25         |   250
		  5		   |   82         |   410				
*/

// Bibliotecas
#include <stdio.h>

// Prototipado
void inicializarVariables();
void ingresarDatos();
void procesarDatos();
void imprimirTicket();

// Variables globales
int cantidad; 
float precio;
float total;

// Función principal
int main(){
	inicializarVariables();
	ingresarDatos();
	procesarDatos();
	imprimirTicket();
	
	return 0;
}

// Funciones
void inicializarVariables(){
	cantidad = 0;
	precio = 0;
	total = 0;
}

void ingresarDatos(){
	printf("Ingrese la cantidad de productos: ");
	scanf("%d", &cantidad);
	
	printf("Ingrese el precio unitario del producto: ");
	scanf("%f", &precio);
}

void procesarDatos(){
	total = cantidad * precio;
}

void imprimirTicket(){
	printf("Cant. unidades: %d - Precio unit.: $ %.2f\n", cantidad, precio);
	printf("Total: $ %.2f\n", total);
	printf("¡Gracias por su compra!");
}

