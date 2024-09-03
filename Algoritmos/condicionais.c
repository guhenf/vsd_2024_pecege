#include <stdio.h>

int main (){
    int idade;
    int idade_minima = 18;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < idade_minima)
    {
        printf("Voce nao tem idade para dirigir...");
    };
    if (idade >= idade_minima)
    {
        printf("Voce tem idade para dirigir...");
    };

    return 0;
}