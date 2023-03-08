#include <stdio.h>
int main()
{
    double nota1, nota2, nota3;

    printf("Insira o primeiro número: ");
    scanf("%lf", &nota1);

    printf("Insira o seguno número: ");
    scanf("%lf", &nota2);

    printf("Insira o segundo número: ");
    scanf("%lf", &nota3);

    double media = (nota1 + nota2 + nota3) / 3;

    if (media < 7 && media >= 4)
    {
        printf("Sua média final foi %.2lf, você está de RECUPERAÇÃO.", media);
    }
    else if (media >= 7 && media <= 10)
    {
        printf("Sua média foi %.2lf, você está APROVADO(A)", media);
    }
    else if (media < 4)
    {
        printf("Sua média foi %.2lf, você está REPROVADO(A)", media);
    }
    else
    {
        printf("Números inseridos inválidos (maiores do que 10 ou menores do que 0)!");
    }
    return 0;
}
