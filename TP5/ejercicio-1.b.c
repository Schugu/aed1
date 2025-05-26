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
			
	Casos de prueba: 
		Total Partidos | Partidos Ganados | Resultado 
		   20		   |    10			  |	   50%
		   100		   |    20			  |	   20%
		   9		   |    5			  |	   55.56%	   					
*/

// Bibliotecas 
#include <stdio.h>

// Prototipado
void inicializarVariables();
void ingresarDatos();
float calcularPorcentaje(int cantPartidos, int cantPartidosGanados);
void mostrarResultado();

// Variables globales
int totalPartidos;
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
	totalPartidos = 0;
	cantPartidosGanados = 0;
}

void ingresarDatos(){
	printf("Ingrese el total de partidos: ");
	scanf("%d", &totalPartidos);
	
	printf("Ingrese el total de partidos ganados: ");
	scanf("%d", &cantPartidosGanados);
}

float calcularPorcentaje(int totalPartidos, int cantPartidosGanados){
	return ((float)cantPartidosGanados / totalPartidos) * 100;
}

void mostrarResultado(){
    float porcentaje = calcularPorcentaje(totalPartidos, cantPartidosGanados);

    if (porcentaje == (int)porcentaje) {
        printf("Porcentaje de partidos ganados: %d%%\n", (int)porcentaje);
    } else {
        printf("Porcentaje de partidos ganados: %.2f%%\n", porcentaje);
    }
}



