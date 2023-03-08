#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Insira o primeiro número: ");
    scanf("%d", &a);

    printf("Insira o segundo número: ");
    scanf("%d", &b);

    printf("Insira o segundo número: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("O maior número entre esses três é: %d", a);
    }
    else if (b > a && b > c)
    {
        printf("O maior número entre esses três é: %d", b);
    }
    else
    {
        printf("O maior número entre esses três é: %d", c);
    }
}
