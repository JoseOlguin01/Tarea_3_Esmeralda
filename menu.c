#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"
#include "funciones.h"
#include "menu.h"

void mostrarMenu (List* listaNodos) {
	bool salir = false;
	while (salir != true)
	{
		printf("\n**********************************************\n");
		printf("\n Bienvenido al Menu  \n\n");
		printf("Seleccione una opcion: \n\n");
		printf("1. Distancia entre entregas \n");
		printf("2. Mostrar 3 entregas más cercanas a las coordenadas ingresadas \n");
		printf("3. Crear ruta \n");
		printf("4. Generar ruta aleatoria \n");
		printf("5. Mejorar ruta \n");
		printf("6. Mostrar rutas \n");
		printf("7. Mejor ruta \n");
    printf("0. Salir \n\n");
		printf("\n**********************************************\n");

		int opcion;
		scanf("%d", &opcion);
		
		switch (opcion) {
			case 1: distanciaEntreEntregas(listaNodos); break;
    	case 2: mostrar3Entregas(listaNodos); break;
			case 3: crearRuta(listaNodos); break;
			case 4: generarRutaAleatoria(listaNodos); break;
			case 5: mejorarRuta(listaNodos); break;
			case 6: mostrarRutas(listaNodos); break;
			case 7: mejorRuta(listaNodos); break;
      case 0 : salir = true; break;
			default : printf("Opcion no valida, intente nuevamente.\n");
		}
	}
}