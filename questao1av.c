#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
     printf("Insira o primeiro número: ");
     scanf("%d", &numero1);

     printf("Insira o segundo número: ");
     scanf("%d", &numero2);

     if(numero1 > numero2) {
        printf("O número %d é maior que o número %d", numero1, numero2);
     } else {
        printf("O número %d é maior que o número %d", numero2, numero1);
     }
   return 0;
}


