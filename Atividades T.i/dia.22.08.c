#include <stdio.h>

void main() {
    
    int numeros[7];
    
    for (int i = 1; i < 10; i++) {
        printf("Digite o %d° valor: ", i);
        scanf("%d", &numeros[i]);
    }
    
    printf("\nValores na ordem digitada:\n");
    for (int i = 1; i < 10; i++) {
        printf("%d\n", numeros[i]);
    }
    
    printf("\nValores na ordem inversa:\n");
    for (int i = 10; i >= 1; i--) {
        printf("%d\n", numeros[i]);
    }
    
}
