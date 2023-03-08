int main()
{
    int numero;
    printf("Insira um número e descubra se ele é par ou impar: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("O número %d é um número par", numero);
    }
    else
    {
        printf("O número %d é um número ímpar", numero);
    }
}
