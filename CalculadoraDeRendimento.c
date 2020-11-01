#include <stdio.h>
#include <stdlib.h>

/*
Calculadora para calculo do valor total de um determinado investimento em um periodo de tempo.
*/

void poupanca(float parcela, int meses, float juros, int x, float total){
    juros = 0.0013;
    for(x=0; x<meses;x++){
    total = (total + parcela + (total*juros));
    }
    printf("\nO total final do investimeto eh %.2f.", total);
}

void tesouroDireto(float parcela, int meses, float juros, int x, float total){
    float anos;

    juros = 0.0345;
    anos = meses/12;

    for(x=0; x<anos; x++){
    total = total + (total*juros);
    }
    printf("\nO total final do investimeto eh %.2f.", total);
}

void cdi(float parcela, int meses, float juros, int x, float total){
    juros = 0.005;

    for(x=0; x<meses;x++){
    total = total + parcela + (total*juros);
    }
    printf("\nO total final do investimeto eh %.2f.", total);
}

void investimento(float parcela, int meses, float juros, int x, float total){
    printf("Digite a taxa de juros:\n");
    scanf("%f", &juros);

    for(x=0; x<meses;x++){
        total = total + parcela + (total*juros);
    }
    printf("\nO total final do investimeto eh %.2f.", total);
}

void imprima(float parcela, int meses){
    printf("%f e %d", parcela, meses);
}

int main(int argc, char *argv[]) {

    int x=1, opcao, meses;
    float parcela, juros, total;

    printf("Digite o valor referente a opcao escolhida.\n1- Poupanca.\n2- Tesouro Direto.\n3- CDI.\n4- Investimeto Personalizado.\n");
    scanf("%d", &opcao);
    printf("Digite o valor da parcela:\n");
    scanf("%f", &parcela);
    printf("Digite o periodo de tempo em meses:\n");
    scanf("%d", &meses);


    switch(opcao){
        case 1:
            poupanca(parcela, meses,  juros,  x,  total);
            break;
        case 2:
            tesouroDireto( parcela,  meses,  juros,  x,  total);
            break;
        case 3:
            cdi( parcela,  meses,  juros,  x,  total);
            break;
        case 4:
            investimento(parcela,  meses,  juros,  x,  total);
            break;
        default:
            imprima( parcela,  meses);
            printf("Esse valor nao esta correto.");
    }
	return 0;
}

