/*
	Diseñe un algoritmo para calcular y mostrar el porcentaje de partidos de fútbol ganados por un club en un 
	campeonato, conociendo los datos: cantidad de partidos jugados y cantidad de partidos ganados por el 
	club. 
	
	Método de resolución de problemas:
		Objetivo: Calcular el porcentaje de partidos ganados de un equipo
		Estrategia: 
			1.ingresarDatos
			2.calcularPorcentaje
			3.mostrarResultado
*/

// Bibliotecas 
#include <stdio.h>

// Prototipado
void inicializarVariables();
void ingresarDatos();
float calcularPorcentaje(int cantPartidos, int cantPartidosGanados);
void mostrarResultado();

// Variables globales
int cantPartidos;
int cantPartidosGanados;

// Función principal 
int main (){
	inicializarVariables();
	ingresarDatos();
	mostrarResultado();
	
	return 0;
}

// Funciones
void inicializarVariables(){
	cantPartidos = 0;
	cantPartidosGanados = 0;
}

void ingresarDatos(){
	printf("Ingrese el total de partidos: ");
	scanf("%d", &cantPartidos);
	
	printf("Ingrese el total de partidos ganados: ");
	scanf("%d", &cantPartidosGanados);
}

float calcularPorcentaje(int cantPartidos, int cantPartidosGanados){
	return ((float)cantPartidosGanados / cantPartidos) * 100;
}

void mostrarResultado(){
	printf("Porcentaje de partidos ganados: %.2f%%", calcularPorcentaje(cantPartidos, cantPartidosGanados));
}



