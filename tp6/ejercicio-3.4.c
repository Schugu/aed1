/*
	Grupo 4
	3.4. Un supermercado dispone de la siguiente información relacionada con sus productos: código de producto, 
	descripción, precio de costo. Desea obtener el precio sugerido, que se calcula aplicando el 30% al precio 
	de costo. Mostrar luego todos los datos del producto, desde la estructura compuesta. 
	Nota:  
	Utilizar la declaración de una estructura compuesta que permita modelar los datos de los productos. El 
	precio sugerido también debe formar parte de la estructura diseñada
        
	Método de resolución de problemas:
    Objetivo: Calcular el precio sugerido de un producto y mostrar todos sus datos.
    Estrategia:
            1.ingresarProducto
            2.calcularPrecioSugerido
            3.mostrarProducto
*/

// Librerías 
#include <stdio.h>

// Tipos
typedef char tString[100];

/* Prototipos */
void ingresarProducto();
void calcularPrecioSugerido();
void mostrarProducto();

// Variables globales 
struct {
    int codigo;
    tString descripcion;
    float precioCosto;
    float precioSugerido;
} producto;

/* Función principal */
int main() {
    ingresarProducto();
    calcularPrecioSugerido();
    mostrarProducto();
    
    return 0;
}

/* Funciones */
void ingresarProducto() {
    printf("Ingrese el código del producto: ");
    scanf("%d", &producto.codigo);
    
    printf("Ingrese la descripción del producto: ");
    fflush(stdin);
    scanf("%[^\n]", &producto.descripcion);
    
    printf("Ingrese el precio de costo: $");
    scanf("%f", &producto.precioCosto);
}

void calcularPrecioSugerido() {
    producto.precioSugerido = producto.precioCosto * 1.30;
}

void mostrarProducto() {
    printf("Producto: \n");
    printf("Codigo: %d\n", producto.codigo);
    printf("Descripcion: %s\n", producto.descripcion);
    printf("Precio de costo: $%.2f\n", producto.precioCosto);
    printf("Precio sugerido: $%.2f\n", producto.precioSugerido);
    printf("Ganancia aplicada: 30%%\n");
}
