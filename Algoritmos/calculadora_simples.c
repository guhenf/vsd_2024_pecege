#include <stdio.h>

int main (){
    printf("Calculadora VSD\n");
    printf("Qual a operacao que deseja realizar?");
    printf("Operacoes disponiveis:");
    printf("\nSoma(+)\nSubtracao(-)\nMultiplicacao(*)\nDivisao(/)\n");

    char operacao;
    int n1,n2;
    int resultado;
    scanf("%c", &operacao);
    printf("Digite os 2 numeros que faremos a operacao:");
    scanf("%d %d", &n1, &n2);

    if (operacao == '+')
    {
        printf("Operacao escolhida foi Adicao = ");
        resultado = n1 + n2;
    }
    else if (operacao == '-')
    {
        printf("Operacao escolhida foi Subtracao = ");
        resultado = n1 - n2;
    }
    else if (operacao == '*')
    {
        printf("Operacao escolhida foi Multiplicacao = ");
        resultado = n1 * n2;
    }
    else if (operacao == '/')
    {
        printf("Operacao escolhida foi Divisao = ");
        resultado = n1 / n2;
    }
    else {
        printf("Opa, tente novamente com algum dos operadores disponiveis.\n");
    printf("%d\n", resultado);
    };
    
    return 0;
}