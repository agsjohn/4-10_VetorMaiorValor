#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

main() {
  int vet[TAM], x, maior;
  for(x = 0; x < TAM; x++){
    printf("Digite o %iº número: ", x + 1);
    scanf("%i", &vet[x]);
    if(x == 0){
      maior = vet[x];
    }
    else{
      if(maior < vet[x]){
        maior = vet[x];
      }
    }
  }
  getchar();
  printf("\nVetor: ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet[x]);
    }
    else{
      printf("%i - ", vet[x]);
    }
  }
  printf("Maior valor do vetor: %i", maior);
  getchar();
}