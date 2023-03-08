#include <stdio.h>

int main(){
  float a, b;
  float diferenca;

  printf("Insira o primeiro número: ");
    scanf("%f", &a);

    printf("Insira o segundo número: ");
    scanf("%f", &b);

    if (a > b)
    {
        diferenca = a - b;
    } else {
        diferenca = b - a;
    }
    
    if (diferenca < 0.0001)
    {
       printf("Os números %f e %f são quase iguais.", a, b);
    } else {
       printf("Os números %f e %f NÃO são quase iguais.", a, b);
    }

}