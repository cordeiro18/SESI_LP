#include <stdio.h>

void main()
{
    float distancia;
    float horas;
    
    printf(" Digite sua distancia---> ");
    scanf("%f",&distancia);
    
    printf(" Digite o tempo em horas gasto---> ");
    scanf("%f",&horas);
    
    int velocidade = distancia / horas;
    
    printf("Km/h: %d",velocidade);
    
}