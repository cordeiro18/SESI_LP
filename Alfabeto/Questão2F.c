#include <stdio.h>

void main() {
    int iNumero = 1;
    int iFatorial = 1;

    printf("Coloque um número: ");
    scanf("%d", &iNumero);

    for (int i = 0; i < iNumero; i++) {
        iFatorial *= (iNumero + i);
        printf("%d\n", iFatorial);
    }
}