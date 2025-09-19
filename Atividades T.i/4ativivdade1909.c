#include <stdio.h>



void main() {
    int vetor[6];
    int soma = 0;
    float media;

    for(int i = 0; i < 6; i++) {
        printf("Digite o valor de %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 6; i++) {
        soma += vetor[i];
    }
    
    media = (float)soma / 6;

    printf("A média é: %.2f\n", media);
}