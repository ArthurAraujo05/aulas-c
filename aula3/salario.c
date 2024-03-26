#include <stdio.h>

float salario = 3000, reajuste = 0.05, salarioatual = 0;
int vale = 28, diasnomes = 30, diasuteis = 20, horatrabalhada = 6;

int main(){
  salarioatual = (salario * reajuste);
  salarioatual = (salarioatual + salario);
  float totaldehoras = horatrabalhada * diasnomes;
  float valortotalporhr = salarioatual / totaldehoras;
  float valortotalrecebido = (vale * diasuteis) + salarioatual;

  printf("salario atual: %2.f \n", salarioatual);
  printf("Valor total recebido: %2.f \n", valortotalrecebido);
  printf("valor total por hr:  %2.f \n", valortotalporhr);

return 0;
}