#include <stdio.h>
#include <stdlib.h>

int menu();
void quadrado();
void retangulo();
void triangulo();

int main() {
    int op;
    system("clear");
    printf("Seja bem vindo ao sistema de Cálculo de Área de Polígonos\n\n");
    while (op != 4){
    op = menu ();
      if (op == 1){
        quadrado(); 
    } if (op == 2){
        retangulo();
    } if (op == 3){
        triangulo();
    }
    };
    return 0;
};

int menu(){
    int op;
    printf("Menu de opções\n");
    printf("1. Quadrado\n");
    printf("2. Retângulo\n");
    printf("3. Triângulo\n");
    printf("4. Encerrar\n");
    printf("Sua opção: \n");
    scanf("%d", &op);
    fflush(stdin);
    return op;
};

void quadrado(){
    float m1, area, perimetro;
    system("clear");    printf("Digite o comprimento de um lado: ");
    printf("Calculando a área do quadrado.");
    printf("\n\n Digite o comprimento do lado: ");
    scanf("%f", &m1);
    area = m1*m1;
    perimetro = m1 * 4;
    printf("\n Área: %f", area);
    printf("\n Perímetro: %f", perimetro);
    printf("\n\n");
};

void retangulo(){
    float m1, m2, area, perimetro;
    printf("Calculando a área de um Retângulo\n");
    printf("Digite o comprimento de um lado: ");
    scanf("%f", &m1);
    printf("Digite o comprimento do outro lado: ");
    scanf("%f", &m2);
    area = m1 * m2;
    perimetro = (m1 * 2) + (m2 * 2);
    printf("\nÁrea: %.2f", area);
    printf("\nPerímetro: %.2f", perimetro);
    printf("\n\n");
};

void triangulo(){
float m1, m2, area, perimetro;
    system("clear");
    printf("Calculando a área de um Triângulo Equilatero\n");
    printf("Digite o comprimento do lado: ");
    scanf("%f", &m1);
    printf("Digite a altura do Triângulo: ");
    scanf("%f", &m2);
    area = (m1 * m2) / 2;
    perimetro = 3 * m1;
    printf("\nÁrea: %.2f", area);
    printf("\nPerímetro: %.2f", perimetro);
    printf("\n\n");
};

