/*
	Se dispone de un termómetro para medir con exactitud la temperatura en un determinado 
	lugar. Se desea una aplicación que permita ingresar un valor de temperatura y muestre 
	un mensaje que indique la sensación térmica, considerando los rangos siguientes:

	Rango de temperatura		Sensación térmica  
	[-10, 10) 					Mucho frío 
	[10, 15) 					Poco frío 
	[15, 25) 					Temperatura normal 
	[25, 30) 					Poco calor 
	[30, 45) 					Mucho calor 

	Por ejemplo: SI (temp<10) ? “Mucho frío”   

	*Nota: - Un intervalo cerrado incluye los extremos. Se representa con corchetes.  
	Ejemplo: [0, 1] ? todos los números mayores o iguales que 0 y menores o iguales 
		que 1. - Un intervalo abierto no incluye los extremos. Se representa con paréntesis.  
	Ejemplo: (-3, 3) ? conjunto de números entre -3 y 3, sin incluir -3 y 3
	
	
	Método de resolución de problemas
		Objetivo: ingresar temperatura y devolver sensación térmica
		Estrategia: 
			1.ingresarTemp
			2.mostrarSensTerm
			
	Casos de prueba:
		Temp    SensTerm
		10 		Poco frío 
		40		Mucho calor
		-2 		Mucho frío
*/

// Librerias
#include <stdio.h>

// Prototipado
void inicializarVariables();
void ingresarTemp();
void mostrarSensTerm();

// Variables globales
int temp;

// Función principal
int main(){
	inicializarVariables();
	ingresarTemp();
	mostrarSensTerm();
	
	return 0;
}

// Funciones
void inicializarVariables(){
	temp = 0;
}

void ingresarTemp(){
	printf("Ingrese la temperatura: ");
	scanf("%d", &temp);
}

void mostrarSensTerm(){
	if (temp >= -10 && temp < 10){
		printf("Mucho frío");
	} else if (temp >= 10 && temp < 15){
		printf("Poco frío");
	} else if (temp >= 15 && temp < 25){
		printf("Temperatura normal");
	} else if (temp >= 25 && temp < 30){
		printf("Poco calor");
	} else if (temp >= 30 && temp < 45){
		printf("Mucho calor");
	}	
}






