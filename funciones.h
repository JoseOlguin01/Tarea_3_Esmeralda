#ifndef funciones_h
#define funciones_h

typedef struct{
	int distancia[25];
  char* nombreRuta;
}Lista;

typedef struct{
  int id[50];
  int x[50];
  int y[50];
}Nodo;


Nodo* importarArchivo(char* file_name, int n);

void importarArchivo(List* listaNodos);

void distanciaEntreEntregas(List* listaNodos);

void mostrar3Entregas(List* listaNodos);

void crearRuta(List* listaNodos);

void generarRutaAleatoria(List* listaNodos);

void mejorarRuta(List* listaNodos); 

void mostrarRutas(List* listaNodos);

void mejorRuta(List* listaNodos);


#endif