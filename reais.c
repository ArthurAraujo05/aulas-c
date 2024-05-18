#include <stdio.h>

int main() {
float vetorA[10], vetorB[10], resultado[10];
char operacao;
int i;

// Entrada de dados para o primeiro vetor
printf("Digite 10 numeros reais para o primeiro vetor:\\n");
for (i = 0; i < 10; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%f", &vetorA[i]);
}

// Entrada de dados para o segundo vetor
printf("Digite 10 numeros reais para o segundo vetor:\\n");
for (i = 0; i < 10; i++) {
    do {
        printf("Elemento %d (diferente de zero para divisao): ", i + 1);
        scanf("%f", &vetorB[i]);
    } while (vetorB[i] == 0);
}

// Solicita ao usuario a operação a ser realizada
printf("Escolha a operacao (+, -, *, /): ");
scanf(" %c", &operacao);

// Realiza a operação escolhida
switch (operacao) {
    case '+':
        for (i = 0; i < 10; i++) {
            resultado[i] = vetorA[i] + vetorB[i];
        }
        break;
    case '-':
        for (i = 0; i < 10; i++) {
            resultado[i] = vetorA[i] - vetorB[i];
        }
        break;
    case '*':
        for (i = 0; i < 10; i++) {
            resultado[i] = vetorA[i] * vetorB[i];
        }
        break;
    case '/':
        for (i = 0; i < 10; i++) {
            if (vetorB[i] != 0) {
                resultado[i] = vetorA[i] / vetorB[i];
            } else {
                printf("Erro: Divisao por zero no elemento %d\\n", i + 1);
                return 1;
            }
        }
        break;
    default:
        printf("Operacao invalida!\\n");
        return 1;
}

// Exibe os elementos do vetor resultante
printf("Resultado da operacao:\\n");
for (i = 0; i < 10; i++) {
    printf("Elemento %d: %.2f\\n", i + 1, resultado[i]);
}

return 0;
