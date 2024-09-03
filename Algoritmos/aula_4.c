#include <stdio.h>
#include <stdlib.h>

int main() {
    int senha, userid;
    char sn, op;
    float m1, m2, area, perimetro;

    printf("Digite seu número de usuário: ");
    scanf("%d", &userid);

    printf("Digite sua senha: ");
    scanf("%d", &senha);
    getchar();

    if (senha == 294540 && userid == 0 || senha == 294541 && userid == 1) {
        printf("Seja bem-vindo ao sistema\n");
        printf("Deseja continuar (S/N)?\n");
        sn = getchar();
        
        if (65 + sn % 65 % 32 == 'S') {
            printf("\nDeseja calcular a área de algum polígono (s/n): ");
            getchar();
            sn = getchar();

            if (65 + sn % 65 % 32 == 'S') {
                system("clear");
                printf("Menu de opções\n");
                printf("1. Quadrado\n");
                printf("2. Retângulo\n");
                printf("3. Triângulo\n");
                printf("4. Encerrar\n");
                printf("Sua opção: ");
                getchar();
                op = getchar();

                if (op == '1') {
                    system("clear");
                    printf("Calculando a área de um Quadrado\n");
                    printf("Digite o comprimento do lado: ");
                    scanf("%f", &m1);

                    area = m1 * m1;
                    perimetro = 4 * m1;

                    printf("\nÁrea: %.2f", area);
                    printf("\nPerímetro: %.2f", perimetro);

                } if (op == '2') {
                    system("clear");
                    printf("Calculando a área de um Retângulo\n");
                    printf("Digite o comprimento de um lado: ");
                    printf("Digite o comprimento de um lado: ");
                    scanf("%f", &m1);
                    scanf("%f", &m2);

                    area = m1 * m2;
                    perimetro = (m1 * 2) + (m2 * 2);

                    printf("\nÁrea: %.2f", area);
                    printf("\nPerímetro: %.2f", perimetro);

                } if (op == '3') {
                    system("clear");
                    printf("Calculando a área de um Triângulo\n");
                    printf("Digite o comprimento do lado: ");
                    scanf("%f", &m1);
                    printf("Digite a altura do Triângulo: ");
                    scanf("%f", &m2);

                    area = (m1 * m2) / 2;
                    perimetro = 3 * m1;

                    printf("\nÁrea: %.2f", area);
                    printf("\nPerímetro: %.2f", perimetro);
                }
            } else {
                printf("Que pena! Essa é a única coisa que sei fazer, tchau...\n");
            }
        }
    } else {
        printf("Cai fora, canalha!!\n");
    }

    return 0;
}
