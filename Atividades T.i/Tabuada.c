#include <stdio.h>

void main() {
    int numero, i;

    printf("Digite o número da tabuada: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

}

