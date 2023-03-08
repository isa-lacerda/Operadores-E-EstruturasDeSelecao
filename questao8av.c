#include <stdio.h>

int main(){ 
    double salario, prestacao;


    printf("Insira o valor do seu salário: ");
    scanf("%lf", &salario);

    printf("Qual o valor da prestação: ");
    scanf("%lf", &prestacao);

    double vintePorcSalario = (double) salario * 20/100;

    //printf("20 porcento de %2.lf: %2.lf \n", salario, vintePorcSalario); só checando se está certo

    if (prestacao > vintePorcSalario)
    {
        printf("Empréstimo não concedido");
    } else {
        printf("Empréstimo concedido.");
    }
    return 0;
}