#include<stdio.h>
int main(){

  int numeros[10] = {3, 7, 15, 22, 31, 42, 56, 64, 71, 88};
  int numerobusca = 42;
  int encontrei = 0; 

int i = 0; 

while (i < 10){
  if (numeros[i] == numerobusca){
    encontrei = 1;
    break;
  }
}

if(encontrei) printf("encontrei");
else printf("Nao encontrei");

return 0;
}