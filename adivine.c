#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(){
  int n; //num elementos
  printf("Ingrese un numero de elementos a generar: ");
  scanf("%d",&n);
  srand(time(NULL));
  int v[n];//arreglo estatico de n elementos
  for(int i=0;i<n;++i){
    v[i] = 1+rand()%100;
  }
  int elem;
  printf("Adivine uno de los numeros: ");
  scanf("%d",&elem);
  int encontrado = 0;//0 significa no encontrado, 1 significa encontrado
  for(int i=0; i<n ; i++){
    if(v[i] == elem){
      encontrado = 1;
      break;
    }
  }
  /* for(long long i=0;i<1000000000;++i) if(i%100000000==0) printf("-\n"); */
  /* printf("\n"); */
  sleep(10);
  if(encontrado==0) printf("Perdiste\n");
  else printf("Suerte\n");
  
  printf("Los numeros eran: ");
  for(int i=0;i<n;++i) printf(" %d",v[i]);
  printf("\n");
  return(0);
}
