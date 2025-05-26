/*
	2.2.2. Con el objeto de conseguir fondos para el viaje de egresados, los alumnos de 6to. año organizaron un 
	baile. El precio de las entradas es de $750 con una consumición, y de $500 sin consumición. Si la venta 
	es anticipada, se realiza un descuento del 20% al valor de la entrada. Se requiere un programa para la 
	emisión de la entrada. La entrada debe mostrar si la venta fue anticipada (‘S’ / ‘N’), el tipo de entrada 
	(1-con consumición, 2-sin consumición) y el importe a pagar.  
	*Nota: prestar atención al ingreso de datos de tipo char. 

	
	Método de resolución de problemas: 
		Objetivo: Imprimir distintos tipos de entradas
		Estratégia: 
			1.ingresarDatos
			2.imprimirEntrada
				2.1.definirValorDeEntrada
				2.2.calcularDescuento
				
				
	Casos de prueba: 
		TIPO DE ENTRADA (1-2) / Es anticipada? / 
		===
			1						S
		Valor de entrada $750.00
		Tipo de entrada: anticipada
		Descuento: 150.00 (20%)
		Total a pagar: $600.00
		===	
		
		===	
			2						S
		Valor de entrada $500.00
		Tipo de entrada: anticipada
		Descuento: 100.00 (20%)
		Total a pagar: $400.00
		===	
		
		===	
			1						N
		Valor de entrada $750.00
		Tipo de entrada: comun
		Total a pagar: $750.00		
		===		
		
		===				
			2						N
		Valor de entrada $500.00
		Tipo de entrada: comun
		Total a pagar: $500.00
		===
*/

// Bibliotecas 
#include <stdio.h>

// Prototipado
void inicializarVariables();
void ingresarDatos();
void imprimirEntrada();
float definirValorEntrada();
float calcularDescuento(float valorEntrada);

// Constantes 
#define ENTRADA_CONSUMISION 750
#define ENTRADA 500 
#define DESCUENTO 20

// Variables globales
int tipoEntrada;
char esAnticipada;

// Función principal
int main() {
	inicializarVariables();
	ingresarDatos();
	imprimirEntrada();
	return 0;
}

// Funciónes 
void inicializarVariables(){
	tipoEntrada = 0;
}


void ingresarDatos(){
	printf("Tipo de entrada (1: Con consumicion, 2: Sin consumision): ");
	scanf("%d", &tipoEntrada);
	
	printf("Tipo de entrada anticipada? (S: si, N: no): ");
	fflush(stdin);
	scanf("%c", &esAnticipada);
}

float definirValorEntrada(){
	if (tipoEntrada == 1){
		return (float)ENTRADA_CONSUMISION;
	} else {
		return (float)ENTRADA;
	}
}

float calcularDescuento(float valorEntrada){
	return ((float)DESCUENTO / 100) * valorEntrada;	
}

void imprimirEntrada(){
	float valorEntrada = definirValorEntrada();
	float desc = calcularDescuento(valorEntrada); 
	float valorFinal = 0;
	
	printf("Valor de entrada $%.2f \n", valorEntrada);
	if (esAnticipada == 'S'){
		printf("Tipo de entrada: anticipada \n");	
		printf("Descuento: %.2f (%d%%) \n", desc, DESCUENTO);
		valorFinal = (valorEntrada - desc);
	} else {
		printf("Tipo de entrada: comun \n");	
		valorFinal = valorEntrada;
	}
	printf("Total a pagar: $%.2f", valorFinal);
}





