#include <stdio.h>

void main() {
    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("A soma é: %d\n", soma);
    
}
