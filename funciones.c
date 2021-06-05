#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "list.h"
#include "funciones.h"

Nodo* importarArchivo(char* file_name, int n){
	Nodo* r = (Nodo*) malloc(sizeof(Nodo));;
	FILE* file = fopen (file_name, "r");
	int i,id=1;
	for(i=1;i<=n;i++){
		r->id[i]=id;
		fscanf (file, "%d", &r->x[i]);
		fscanf (file, "%d", &r->y[i]);
		printf("%d ",r->id[i]);
		printf("%d",r->x[i]);
		printf(" %d\n",r->y[i]);
		id++;
	}

	fclose (file);
	return r;
}

List* get_adj_nodes(Nodo* r, int n){
    
    List* list=createList();
    int i;
    for(i=0;i<n;i++){
      
      
    Nodo *adj_r=(Nodo*)malloc(sizeof(Nodo));
    adj_r=r;
    pushBack(list,adj_r);
      

    	return list;
    }
    
    return list;
}

void distanciaEntreEntregas(Nodo* r,int n){
int id,id2;
float distancia;

printf("Inserte el identificador de la primera entrega\n");
scanf("%d", &id);

printf("Inserte el identificador de la segunda entrega\n");
scanf("%d", &id2);

if(id>n || id2>n || id<1 || id2<1){
printf("A ingresado un id incorrecto\n");

}else{
distancia=sqrt((r->x[id2] - r->x[id])*(r->x[id2] - r->x[id])+(r->y[id2]-r->y[id])*(r->y[id2] - r->y[id]));

printf("La distancia entre las 2 entregas ingresadas es\n");
printf("%.2f", distancia);

}


}

/*void mostrar3Entregas(){
  
}*/

/*void crearRuta(Nodo* r,int n){
int x,y,i,tru=0;
char* nombreRuta;
printf("Ingrese la coordenada para la variable x\n");
scanf("%d", &x);
printf("Ingrese la coordenada para la variable y\n");
scanf("%d", &y);
for(i=0; i<n; i++){
	if(x==r->x[i] && y==r->y[i]){
		tru=1;
		}
	}

	if(tru==1){
		    
    printf("Ïngrese el nombre a su nueva ruta\n");
		scanf("%s", nombreRuta);
	}else{
		printf("Las coordenadas ingreseada no existen");
	}
	
}*/


/*
void generarRutaAleatoria(Nodo* r){

}
*/
