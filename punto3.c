#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Producto {
int ProductoID; //Numerado en ciclo iterativo
int Cantidad; // entre 1 y 10
char *TipoProducto; // Algún valor del arreglo TiposProductos
float PrecioUnitario; // entre 10 - 100
}typedef producto;

struct Cliente {
int ClienteID; // Numerado en el ciclo iterativo
char *NombreCliente; // Ingresado por usuario
int CantidadProductosAPedir; // (aleatorio entre 1 y 5)
producto *Productos //El tamaño de este arreglo depende de la variable
// “CantidadProductosAPedir”
}typedef cliente;


int main(){
char *TiposProductos[]={"Galletas","Snack","Cigarrillos","Caramelos","Bebidas"};
int cantClientes, cantProductos;
printf("Ingrese la cantidad de clientes que tiene:");
scanf("%d", &cantClientes);
while (cantClientes > 5 || cantClientes < 0)
{
    printf("El valor ingressado es incorrecto, ingrese un numero menor a 5");
    scanf("%d", &cantClientes);
}
cliente *V= (cliente*)malloc(cantClientes * sizeof(cliente));

    return 0;
}