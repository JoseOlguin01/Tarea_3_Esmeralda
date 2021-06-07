#ifndef funciones_h
#define funciones_h

typedef struct{
	int distancia[25];
  char* nombreRuta;
}Lista;

typedef struct{
  int id[50];
  int visited[50];
  int x[50];
  int y[50];
  int aux[50];
  float distancia[50];
  float total[50];
  char nombreRuta[50];
}Entrega;


Entrega* importarArchivo (char* file_name, int n);

List* get_adj_nodes(Entrega* r,float total, int n, int id,int id2);

float calculardistancia (int x1, int y1, int x2, int y2);

void distanciaEntreEntregas(Entrega* r,int n);

void mostrar3Entregas (Entrega* r, int n);

void crearRuta (Entrega* r,int n);

void generarRutaAleatoria (Entrega* r,int n);

void mejorarRuta (Entrega* r,int n); 

void mostrarRutas (Entrega* r,int n);

void mejorRuta (Entrega* r,int n);

#endif