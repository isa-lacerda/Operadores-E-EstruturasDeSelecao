#include <stdio.h>
int main()
{
    int numero;
     printf("Insira o número: ");
     scanf("%d", &numero);

     if (numero == 0)
     {
        printf("Este número é o número zero");
     } else if(numero > 0) {
        printf("O número %d é positivo.", numero);
     } else {
        printf("O número %d é negativo.", numero);
     }
    return 0;
}
