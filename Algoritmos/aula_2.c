#include <stdio.h>

int main(){
    char sexo;
    int idade;
    float estatura, peso, estatura_m;

    printf("Digite seu sexo(M/F): ");
    sexo = getchar();

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua estatura (cm): ");
    scanf("%f", &estatura);

    printf("\n=======================");

    printf("\nSexo: %c", sexo);
    printf("\nIdade: %d", idade);
    printf("\nEstatura: %6.2f", estatura);
    printf("\nPeso: %6.2f", peso);

    estatura_m = estatura / 100;
    float imc = peso / (estatura_m*estatura_m);

    printf("\nSeu IMC é: %6.2f", imc);
    printf("\n=======================");
    printf("\n");

    return 0;
}