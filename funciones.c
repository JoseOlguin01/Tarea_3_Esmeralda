#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "list.h"
#include "funciones.h"

Entrega* importarArchivo(char* file_name, int n) {
	Entrega* r = (Entrega*) malloc(sizeof(Entrega));;
	FILE* file = fopen (file_name, "r");
	int i, id = 1;
	for (i = 1; i <= n; i++) {
		r->id[i] = id;
		fscanf (file, "%d", &r->x[i]);
		fscanf (file, "%d", &r->y[i]);
		printf ("%d ",r->id[i]);
		printf ("%d",r->x[i]);
		printf (" %d\n",r->y[i]);
		id++;
	}
	fclose (file);
	return r;
}

List* get_adj_nodes(Entrega* r, int n, int id, int id2) {    
    List* list=createList();
    int i;
		Entrega *adj_r = (Entrega*)malloc(sizeof(Entrega));
		adj_r = r;
      	adj_r->distancia[id] = calculardistancia (r->x[id],r->y[id],r->x[id2],r->y[id2]);
      	adj_r->id[id] = id;
        //r->total[id]+=adj_r->distancia[id];
        printf("Entregas faltantes\n");
        for (i=1; i<=n; i++) {
        	if (r->visited[i]==0) {
            	printf("%d ", r->id[i]);
            	printf("%.2f\n", calculardistancia (r->x[id2],r->y[id2],r->x[i],r->y[i]));
				r->total[id]+=adj_r->distancia[id];
          	}
        }
        printf("%.2f\n",r->total[id]);
		pushBack(list,adj_r);
  return list;
}

float calculardistancia (x1, y1, x2, y2) {
	float distancia = 0;
	distancia = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));
	return distancia;
}


void distanciaEntreEntregas(Entrega* r,int n) {
int id1, id2;
float distancia;

printf("Inserte el identificador de la primera entrega :\n");
scanf("%d", &id1);
printf("Inserte el identificador de la segunda entrega :\n");
scanf("%d", &id2);

	if (id1 > n || id2 > n || id1 < 1 || id2 < 1) {
		printf("A ingresado un id incorrecto\n");
	}
	else
	{
		distancia = calculardistancia (r->x[id1], r->y[id1], r->x[id2], r->y[id2]);	
		printf("La distancia entre las 2 entregas ingresadas es : %.2f\n", distancia);
	}
}

void bubbleSort(Entrega* r, int n) {
    int i, j, aux2;
    float aux;
  	for (i = 1; i <= n-1; i++) {  
    	for (j = 1; j <=n-i; j++) {
        	if (r->distancia[j] > r->distancia[j+1]) {
				aux=r->distancia[j];
				r->distancia[j]=r->distancia[j+1];
				r->distancia[j+1]=aux;
				aux2=r->aux[j];
				r->aux[j]=r->aux[j+1];
				r->aux[j+1]=aux2;
			}
    	}
  	}
}

/*void mostrar3Entregas (Entrega* r, int n) {
	int coordenadax, coordenaday;
	printf("Ingrese coordenada x :\n");
	scanf("%d", &coordenadax);
	printf("Ingrese coordenada y :\n");
	scanf("%d", &coordenaday);
	int i;
	for (i = 1; i <= n; i++ ) {
  	r->distancia[i] = calculardistancia(r->x[i], r->y[i], coordenadax, coordenaday); 	
	}
	
  	for (int i = 1; i <= n; i++) {
    	r->aux[i] = r->id[i];
  	}

  	bubbleSort(r , n);

	int cont = 0;
	printf("Las entregas más cercanas a la ruta son :\n");
	printf("id   distancia\n");
	for (int i = 0; cont<3; i++ ) {
		if(r->distancia[i]!=0) {
    		cont++;
    		printf ("%d    %.2f\n",r->aux[i], r->distancia[i]);
    	}
	}
}*/

/*void crearRuta(Entrega* r,int n){
int x,y,i,id,id2,tru=0,cont=1;
char* nombreRuta;
printf("Ingrese la coordenada para la variable x\n");
scanf("%d", &x);
printf("Ingrese la coordenada para la variable y\n");
scanf("%d", &y);
for(i=1; i<=n; i++) {
	if(x==r->x[i] && y==r->y[i]) {
		id=r->id[i];
    	id2=id;
      r->visited[id]=1;
    	tru=1;
		}
	}
  r->total[id]=0.00;
	if (tru==1) {
		while(cont!=n) {
          	get_adj_nodes (r ,n ,id,id2 );
          	id=id2;
          	printf("Escoja un siguiente id de entrega\n");
          	scanf("%d", &id2);
            r->visited[id2]=1;
          	cont++;
        }
    	printf("Ïngrese el nombre a su nueva ruta\n");
		scanf("%s", r->nombreRuta);
	}
	else
	{
		printf("Las coordenadas ingreseada no existen");
	}	
}*/


/*
void generarRutaAleatoria(Entrega* r){
  int x,y,i,id,id2,tru=0,cont=1;
char* nombreRuta;
printf("Ingrese la coordenada para la variable x\n");
scanf("%d", &x);
printf("Ingrese la coordenada para la variable y\n");
scanf("%d", &y);
for(i=1; i<=n; i++) {
	if(x==r->x[i] && y==r->y[i]) {
		id=r->id[i];
    	id2=id;
      r->visited[id]=1;
    	tru=1;
		}
	}
  r->total[id]=0.00;
	if (tru==1) {
		while(cont!=n) {
          	get_adj_nodes (r ,n ,id,id2 );
          	id=id2;
          	printf("Escoja un siguiente id de entrega\n");
          	scanf("%d", &id2);
            r->visited[id2]=1;
          	cont++;
        }
    	printf("Ïngrese el nombre a su nueva ruta\n");
		scanf("%s", r->nombreRuta);
	}
	else
	{
		printf("Las coordenadas ingreseada no existen");
	}	
}
*/
