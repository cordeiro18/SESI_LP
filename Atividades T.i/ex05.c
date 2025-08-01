#include <stdio.h>

int main(){
    
    int nascimento;
    int ano;
    
    printf(" Digite seu ano de nascimento: ");
    scanf("%d",&nascimento);
    
    printf(" Digite seu ano atual: ");
    scanf("%d",&ano);
    
    int idade = ano - nascimento;
    
    printf("sua idade é: %d", idade);
}
    