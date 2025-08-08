#include <stdio.h>

void main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade<=12){
    printf("\n Voce é Criança ");
    } else   if (idade<=30)
    {    printf("\n Voce é Jovem ");
    }   if (idade>30){
    printf("\n Tu é velho ");
    }
}
