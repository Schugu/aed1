/*
  Grupo 4
  Un supermercado desea calcular el valor total de la compra a partir de los siguientes datos de los
  productos comprados por un cliente: cantidad, precio unitario y descripción. Se debe tener en cuenta
  que un cliente puede comprar varios productos distintos. El cajero ingresará -1 como valor de cantidad
  para indicar que terminó de ingresar los productos de un cliente. Se debe Imprimir el importe total a
  pagar con el formato que se muestra a continuación:

  Método de resolución de problemas:
  Objetivo: Calcular el valor total de compra
  Estrategia:
    1.ingresarDatosCompra
    2.mostrarTotal

*/

// Librerias
#include <stdio.h>

// Prototipado
void inicializarVariables();
void ingresarDatosCompra();
void mostrarTotal();

// Variables globales
int cantidad;
float precio;
float subtotal;
float total;
typedef char tString[100];
tString descripcion;

// Función principal
int main() {
  inicializarVariables();
  ingresarDatosCompra();
  mostrarTotal();

  return 0;
}

// Funciones
void inicializarVariables() {
  cantidad = 0;
  precio = 0;
  subtotal = 0;
  total = 0;
}

void ingresarDatosCompra() {
  int seguir = 1;

  while (seguir == 1) {
    printf("Ingrese la cantidad del producto (-1 para finalizar): ");
    scanf("%d", &cantidad);

    if (cantidad == -1) {
      seguir = 0;
      return;
    }

    printf("Ingrese el precio unitario: ");
    scanf("%f", &precio);

    printf("Ingrese la descripcion del producto: ");
    fflush(stdin);
    scanf("%[^\n]s", descripcion);

    subtotal = cantidad * precio;
    total += subtotal;

    printf("Producto: %s\n", descripcion);
    printf("%d X $ $%.2f\n", cantidad, precio);
    printf("Subtotal: $ %.2f\n\n", subtotal);
  }
}

void mostrarTotal() {
  printf("************************************\n");
  printf("TOTAL A PAGAR: $ %.2f\n", total);
  printf("************************************\n");
  printf("Gracias por su compra!\n");
}

/*
  Casos de prueba:

  Producto                     Cantidad   Precio     Resultado esperado
  Jabón Líquido Ala Matic         2       $860.00        $1720.00
  Fideos Tallarines Canale        5       $120.00        $600.00
  Tomates Peritas Triturados      3       $150.00        $450.00

  TOTAL A PAGAR: $2770.00


  Ingrese la cantidad del producto (-1 para finalizar): 2
  Ingrese el precio unitario: 860
  Ingrese la descripcion del producto: Jabón Líquido Ala Matic
  Producto: Jabón Líquido Ala Matic
  2 X $ $860.00
  Subtotal: $ 1720.00

  Ingrese la cantidad del producto (-1 para finalizar): 5
  Ingrese el precio unitario: 120
  Ingrese la descripcion del producto: Fideos Tallarines Canale
  Producto: Fideos Tallarines Canale
  5 X $ $120.00
  Subtotal: $ 600.00

  Ingrese la cantidad del producto (-1 para finalizar): 3
  Ingrese el precio unitario: 150
  Ingrese la descripcion del producto: Tomates Peritas Triturados
  Producto: Tomates Peritas Triturados
  3 X $ $150.00
  Subtotal: $ 450.00

  Ingrese la cantidad del producto (-1 para finalizar): -1
  ************************************
  TOTAL A PAGAR: $ 2770.00
  ************************************
  Gracias por su compra!
*/
