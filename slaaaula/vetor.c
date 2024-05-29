#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarNumerosAleratorios(int arr[], int tam){
  srand(time(0));

  for (int i = 0; i < tam; i++){
    arr[i] = rand() % 100;
  }

  return 0;
}

int printArr(int arr[], int tam){
  for (int i = 0; i < tam; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}

void troca (int* a, int* b){
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[], int low, int high){
  int pivot = arr[high];
  int i = (low - 1); 

  for (int l = low; l < high; l++){
    if (arr[l] <= pivot) {
      i++; 
      troca(&arr[i], &arr[l]);
    }
  }
  troca(&arr[i + 1], &arr[high]);
  return (i + 1);
}

void quick(int arr[], int low, int high){
  if (low < high){
    int a = partition(arr, low, high);

    quick(arr, low, a - 1);
    quick(arr, a + 1, high);
    
  }
}

int main(){
  int tam = 6;
  int arr[tam];

  gerarNumerosAleratorios(arr, tam);
  printf("arr aleatorio: ");
  printArr(arr, tam);

  quick(arr, 0, tam -1);
  printf("arr ordenado: ");
  printArr(arr, tam);

  return 0;