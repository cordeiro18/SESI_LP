#include <stdio.h>

void main()
{
    float distancia;
    float gasosa;
    
    printf(" Digite sua distancia---> ");
    scanf("%f",&distancia);
    
    printf(" Digite a gasosa gasta---> ");
    scanf("%f",&gasosa);
    
    float consumo = distancia/gasosa;
    
    printf("Voce consumiu %f litros Km/l", consumo);
    
}
