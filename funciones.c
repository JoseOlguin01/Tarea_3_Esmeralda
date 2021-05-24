#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "funciones.h"

Nodo* importarArchivo(char* file_name, int n){
  Nodo* r = (Nodo*) malloc(sizeof(Nodo));;
  FILE* file = fopen (file_name, "r");
  int i,id=1;
  for(i=0;i<n;i++){
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

/*List* get_adj_nodes(Nodo* r, int n){
    
    List* list=createList();
    int i,j,k;
    for(i=0;i<n;i++){
      
      for(k=1;k<10;k++){
      Nodo *adj_r=(Nodo*)malloc(sizeof(Nodo));
      adj_r=r;
      pushBack(list,adj_r);
      }

     return list;
    }
    
    return list;
}*/

/*void crearRuta(){

}

void generarRutaAleatoria(){

}
*/
