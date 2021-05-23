#ifndef funciones_h
#define funciones_h

typedef struct{
	
}Nodo;

typedef struct{
  
}Lista;

char *get_csv_field (char * tmp, int k);

void importarArchivo(List* listaNodos);

void distanciaEntreEntregas(List* listaNodos);

void mostrar3Entregas(List* listaNodos);

void crearRuta(List* listaNodos);

void generarRutaAleatoria(List* listaNodos);

void mejorarRuta(List* listaNodos); 

void mostrarRutas(List* listaNodos);

void mejorRuta(List* listaNodos);


#endif