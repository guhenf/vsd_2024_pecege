#include <stdio.h>
#include <stdlib.h>

int main(){
    int resposta = 500, chute;
    printf("Qual é o número? ");
    scanf("%d", &chute);

    while (chute != 500){
        printf("Errou amigo! ");
        printf("Manda outro número ai:  ");  
        scanf("%d", &chute);
    }
    printf("Acertou amigo!\n\n");
    return 0;
}