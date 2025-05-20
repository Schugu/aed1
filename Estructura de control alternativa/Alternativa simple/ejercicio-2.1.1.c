/*
	Un supermercado desea ofrecer un beneficio para atraer clientes. Decide realizar una bonificaci�n de 
	15% al total de la compra si �sta es mayor o igual a $5000 y la forma de pago es en efectivo o se 
	compran m�s de 10 productos (Utilice una sola expresi�n l�gica). El ticket debe mostrar la bonificaci�n 
	y la forma de pago en el detalle. Las formas de pago disponibles son (c-tarjeta de cr�dito / d-tarjeta 
	de d�bito / e-efectivo).  
	*Nota:  - Prestar atenci�n al ingreso de datos de tipo char - Reutilizar la soluci�n del programa correspondiente al ejercicio 1.a) 
	Ejemplos: 
	
	Cant. unidades: 7 - Precio unit.: $ 1000  
	Total: $ 7000.00 
	Forma de pago: c 
	Bonificaci�n: $ 0.00 
	Total a pagar: $ 7000.00 
	�Gracias por su compra!
	
	Cant. unidades: 7 - Precio unit.: $ 1000  
	Total: $ 7000.00 
	Forma de pago: e 
	Bonificaci�n: $ 1050.00 
	Total a pagar: $ 5950.00 
	�Gracias por su compra! 
	
	
	M�todo de resoluci�n de problemas: 
		Objetivo: Imprimir un ticket con los datos de compra m�s descuentos y forma de pago.
		Estrategia: 
			1.ingresarDatos
			2.mostrarTicket
				2.1.validarBonificaci�n
					2.1.1.calcularBonificaci�n
				2.2.mostrarResultado
		
				
	Casos de prueba
		Cant. Unidades | Precio Unit. | M�todo de pago | Resultado
		   9		   |    100		  |    e		   | Total: $900.00
		   												 Bonificaci�n: $0
		   												 Total a pagar: $900
		   												 
		   10		   |    1000	  |    c		   | Total: $10000.00
		   												 Bonificaci�n: $1500
		   												 Total a pagar: $8500
		   												
		   20		   |    2500	  |    d		   | Total: $50000.00
		   												 Bonificaci�n: $7500
		   												 Total a pagar: $42500								 
*/

// Bilbiotecas
#include <stdio.h>

// Constantes 
#define BONIF 15

// Prototipado
void inicializarVariables();
void ingresarDatos();
void formatearMetodoDePago();
float calcularTotalCompra();
void calcularBonificacion(float totalCompra);
void imprimirTicket();

// Variables globales
int cantUnidades;
float precioUnit;
char metodoDePago;

// Funci�n principal
int main(){
	inicializarVariables();
 	ingresarDatos();
 	imprimirTicket();
	
	return 0;
}

// Funciones
void inicializarVariables(){
	cantUnidades = 0;
	precioUnit = 0;
}

void ingresarDatos(){
	printf("Ingrese la cantidad de productos: ");
	scanf("%d", &cantUnidades);
	
	printf("Ingrese el precio unitario del producto: ");
	scanf("%f", &precioUnit);
	
	printf("Ingrese la forma de pago (c-tarjeta de cr�dito / d-tarjeta de d�bito / e-efectivo): ");
	fflush(stdin);
	scanf("%c", &metodoDePago);
}

void formatearMetodoDePago(){
	printf("Forma de pago: ");
	switch (metodoDePago){
		case 'c': printf("Tarjeta de cr�dito\n");
			break;
		case 'd': printf("Tarjeta de d�bito\n");
			break;
		case 'e': printf("Efectivo\n");
			break;
		default: printf("M�todo desconocido\n");
	}
}

float calcularTotalCompra(){
	return cantUnidades * precioUnit;
}

void calcularBonificacion(float totalCompra){
	float bonificacion = 0;
	float totalConBonif = 0;
	
	if ((totalCompra >= 5000) && (metodoDePago == 'e' || cantUnidades >= 10)) {
		bonificacion = ((float)BONIF / 100) * totalCompra;
		totalConBonif = totalCompra - bonificacion;
	} else {
		totalConBonif = totalCompra;
	}
	
	printf("Bonificaci�n: $%2.f\n", bonificacion);
	printf("Total a pagar: $%2.f\n", totalConBonif);
}


void imprimirTicket(){
	float totalCompra = calcularTotalCompra();
	printf("Cant. unidades: %d - Precio unit.: $%.2f\n", cantUnidades, precioUnit);
	printf("Total: $%.2f\n", totalCompra);
	formatearMetodoDePago();
	calcularBonificacion(totalCompra);
	printf("�Gracias por su compra!");
}






