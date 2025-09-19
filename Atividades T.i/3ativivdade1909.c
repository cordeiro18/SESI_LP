#include <stdio.h>



void main(){
 
 int vetor[10], soma;
 
 for(int i=0; i < 10; i++) {
		printf("Digite o valor de %d\n", i+1);
		scanf("%d", &vetor[i]);
	}
 
 for(int i = 0; i < 10; i++) {
        soma += vetor[i];
    }
    
 printf("A soma de todos os vetor é: %d\n", soma);
 
}