#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "funciones.h"
#include "menu.h"

Entrega* importarArchivo(char* file_name, int n);

int main() {
	int n;
	List* listaNodos=createList();
	printf("Ingrese la cantidad de lineas a importar del archivo\n");
	scanf("%d",&n);
	Entrega* initial = importarArchivo("tsp.txt",n);
	mostrarMenu (listaNodos,initial,n);

	return 0;

}