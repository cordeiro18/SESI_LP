#include <stdio.h>

void main(){
    
    float peso;
    float altura;
    
    printf("Seu peso: ");
    scanf("%f",&peso);
    
    printf("Sua altura: ");
    scanf("%f",&altura);
    
   float imc =  peso / (altura * altura);
    
    printf("%f %f Seu IMC é: %f\n", peso, altura, imc);    
    
}