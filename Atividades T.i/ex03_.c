#include <stdio.h>

    float main(){
    
    float nota1;
    float nota2;
    float nota3;
    
    printf(" Digite sua nota 1: ");
    scanf("%f", &nota1 );
    
    
    printf(" Digite sua nota 2: ");    
    scanf("%f", &nota2 );    
    
    printf(" Digite sua nota 3: ");    
    scanf("%f", &nota3 );
    
    float media = (nota1 + nota2 + nota3) / 3;    
    
printf(" sua media final é:%f ",media);    
    }