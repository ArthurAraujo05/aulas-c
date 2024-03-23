#include <stdio.h>

int main(void) {
  float nota1, nota2, media;

  printf("Digite a nota1: ");
  scanf("%f", &nota1);

  printf("digite a nota2: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) /2;
  printf("a media e: %f\n", media);

  if (media >= 6)
    printf("Aprovado");
  else {
    printf("Reprovado");
  }

  return 0;
}