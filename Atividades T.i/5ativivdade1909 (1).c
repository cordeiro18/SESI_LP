#include <stdio.h>



void main() {
    int vetor[8];
    int maior, menor;

    for(int i = 0; i < 8; i++) {
        printf("Digite o valor de %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 1; i < 8; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
        else if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("O maior valor do vetor é: %d\n", maior);
    printf("O menor valor do vetor é: %d\n", menor);
}