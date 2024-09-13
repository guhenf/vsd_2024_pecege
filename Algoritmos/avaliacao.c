#include <stdio.h>
#include <stdlib.h>

int avaliacaoV1();
int avaliacaoV2eV3();

int main() {

    avaliacaoV1();
    avaliacaoV2eV3();

};

int avaliacaoV1(){
    int peoples;

    int meat_qtd_total;
    int sausage_qtd_total;
    int beer_qtd_total;

    int meat_qtd = 400;
    int sausage_qtd = 100;
    int beer_bootles = 3;

    printf("\nAvaliacao Versao 1.0\n");
    printf("Vamos churrasquear, quantas pessoas vão?");
    scanf("%d", &peoples);

    meat_qtd_total = peoples * meat_qtd;
    sausage_qtd_total = peoples * sausage_qtd;
    beer_qtd_total = peoples * beer_bootles;

    printf("\nA quantidade total de Carne para o churras é: %.0d gramas", meat_qtd_total);
    printf("\nA quantidade total de Carne para o churras é: %.0d gramas", sausage_qtd_total);
    printf("\nA quantidade total de Carne para o churras é: %.0d garrafas\n", beer_qtd_total);
    printf("\n==============================================================\n");

    return 0;
}

int avaliacaoV2eV3(){

    int meat_qtd = 500;
    int sausage_qtd = 100;
    int cheese_qtd = 100;
    int beer_bootles = 4;
    int soda_ml = 300;

    int man;
    int woman;
    int vegiesMan;
    int vegiesWoman;

    int meat_qtd_total;
    int sausage_qtd_total;
    int cheese_qtd_total;
    int eggplant_qtd_total;
    int onion_qtd_total;
    int beer_qtd_total;
    int soda_qtd_total;
    
    printf("\nAvaliacao Versao 2.0 e 3.0\n");
    printf("Vamos churrasquear, quantos homens vão?");
    scanf("%d", &man);

    printf("Quantos são vegetarianos?");
    scanf("%d", &vegiesMan);

    printf("Quantas mulheres vão?");
    scanf("%d", &woman);

    printf("Quantos são vegetarianos?");
    scanf("%d", &vegiesWoman);

    if((man + woman) < 8){
        printf("Ta sem amigo rapaz? Não vale a pena o esforço. \n");
    } else if ((man + woman) > 20) {
        printf("Parece dono de time de futebol rapaz, cancela tudo. \n");
    } else {

    if ((vegiesWoman + vegiesMan) >= 1)
    {
        eggplant_qtd_total = (vegiesWoman + vegiesMan) * 2;
        onion_qtd_total = (vegiesWoman + vegiesMan) * 2;
    }

    man = man - vegiesMan;
    woman = woman - vegiesWoman;
    
    meat_qtd_total = man * meat_qtd + woman * (meat_qtd - 200);

    sausage_qtd_total = (man + woman) * sausage_qtd;

    beer_qtd_total = man * beer_bootles + woman * (beer_bootles - 2);

    cheese_qtd_total = man * cheese_qtd + woman * (cheese_qtd + 100);

    soda_qtd_total = (man + woman) * soda_ml;

    printf("\nA quantidade total de Carne para o churras é: %d gramas.", meat_qtd_total);
    printf("\nA quantidade total de Linguiça para o churras é: %d gramas.", sausage_qtd_total);
    printf("\nA quantidade total de Cerveja para o churras é: %d garrafas.", beer_qtd_total);
    printf("\nA quantidade total de Queijo Coalho para o churras é: %d gramas.", cheese_qtd_total);
    printf("\nA quantidade total de Guarana para o churras é: %d ml.", soda_qtd_total);
    printf("\nA quantidade total de Cebolas para o churras é: %d unidades.", onion_qtd_total);
    printf("\nA quantidade total de Beringelas para o churras é: %d unidades. \n", eggplant_qtd_total);
    }

    return 0;
}



