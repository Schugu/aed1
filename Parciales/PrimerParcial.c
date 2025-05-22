/* 	
	Grupo 4

	Objetivo: Mostrar informe de materiales descartables y 
			  un informe de sericios en base a los datos de pacientes 
	
	Estrategia: 
		1.ingresoDeDatos
		2.generarInformeMatDescartables
			2.1.ingresarDatos;
		3.generarInformeGral
			3.1.calcularPorcentaje
	
		
	Casos de prueba: 
	Nro. de paciente - Edad - Cod. Plan - Cod. Servicio 
	===
	25 					20		P			1
	200 		  		5 		O 			11
	531 				33      B           21
	3691 				24 		P			3
	Resumen de servicios del d�a - Atencion en consultorios
	Total de pacientes atendidos: 4
	Total de pacientes atendidos en consultorio: 1
	Porcentaje de pacientes atendidos en consultorio: 25.00%
	===
		
	===	
	4000 				50 		P			2
	4051 				19      O			2
	4524 				24  	O			3
	Resumen de servicios del d�a - Atencion en consultorios
	Total de pacientes atendidos: 3
	Total de pacientes atendidos en consultorio: 2
	===
	
	===
	4998 				80      B           2
	5001 				100 	O 			3
	Resumen de servicios del d�a - Atencion en consultorios
	Total de pacientes atendidos: 2
	Total de pacientes atendidos en consultorio: 1
	Porcentaje de pacientes atendidos en consultorio: 50.00%
	===
*/

// Bibliotecas
#include <stdio.h>

// Constantes
#define tituloInforme "Resumen de servicios del d�a - Atencion en consultorios"

// Prototipado
void inicializarVariables();
void ingresarDatos();
void generarInformeMatDescartables();
void generarInformeGral();
void formatearPlan(char codPlan);
void formatearServicio(int codServicio);
float calcularPorcentaje(int totalPacientes, int totalPacientesConsultorio);

// Variables globales
int nroPaciente;
int edad;
char codPlan;
int codServicio;
int totalPacientes; 
int totalPacientesConsultorio;


// Funcion principal
int main(){
	inicializarVariables();
	generarInformeMatDescartables();	
	generarInformeGral();
	
	return 0;
}

// Funciones
void inicializarVariables(){
	nroPaciente = 0;
	edad = 0;
	codPlan = 0;
	codServicio = 0;
	totalPacientes = 0; 
	totalPacientesConsultorio = 0; 
}

void ingresarDatos(){
	printf("Ingrese el numero de paciente: ");
	scanf("%d", &nroPaciente);
	
	printf("Ingrese la edad del paciente: ");
	scanf("%d", &edad);
	
	printf("Ingrese el codigo de plan (B: Basico, P: Plata, O: Oro): ");
	fflush(stdin);
	scanf("%c", &codPlan);
	
	printf("Ingrese el codigo de servicio (1: Atencion en domicilio, 2: Atencion en consultorios, 3: Analisis clinicos): ");
	scanf("%d", &codServicio);
}

void formatearPlan(char codPlan){
	printf("Plan: ");
	switch (codPlan) { 
		case 'B': 
			printf("Basico ");
			break;
		case 'P': 
			printf("Plata ");
			break;
		case 'O': 
			printf("Oro ");
			break;
		default: 
			printf("Valor desconocido. ");
	}
}

void formatearServicio(int codServicio){
	printf("Servicio: ");
	switch (codServicio){
		case 1: 
			printf("Atencion en domicilio");
			break;
		case 2: 
			printf("Atencion en consultorios");
			break;
		case 3: 
			printf("Analisis clinicos");
			break;
		default: 
			printf("Valor desconocido.");
	}
}

void generarInformeMatDescartables(){
	int continuar = 1;
	printf("Servicios medicos con salud\n");
	
	while (continuar == 1) {
		ingresarDatos();
		
		if (codServicio == 1 && codPlan != 'B'){
			printf("*** Paciente Nro: %d - ", nroPaciente);
			formatearPlan(codPlan);
			printf(" - ");
			formatearServicio(codServicio);
			printf(" ***");
			printf("\nNota: La cobertura incluye todos los gastos materiales descartables\n");
		}
		
		totalPacientes += 1;
		
		if (codServicio == 2){
			totalPacientesConsultorio += 1; 
		}
		
		printf("Desea ingresar otro paciente? (1: Si, 2: No): ");
		scanf("%d", &continuar);
	}
}

float calcularPorcentaje(int totalPacientes, int totalPacientesConsultorio){
  float aux1 = totalPacientesConsultorio;
  float aux2 = totalPacientes;
  return ((aux1 / aux2) * 100);
}

void generarInformeGral(){
	printf("%s\n", tituloInforme);
	printf("Total de pacientes atendidos: %d \n", totalPacientes);
	printf("Total de pacientes atendidos en consultorio: %d\n", totalPacientesConsultorio);
	printf("Porcentaje de pacientes atendidos en consultorio: %.2f%%", calcularPorcentaje(totalPacientes, totalPacientesConsultorio));
}
