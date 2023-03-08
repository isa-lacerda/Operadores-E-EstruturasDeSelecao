#include <stdio.h>
int main()
{
    char letra_input;
    char valor_ascii = (int)letra_input;
    printf("Insira uma letra: ");
    scanf("%c", &letra_input);
    if (letra_input == 'a' || letra_input == 'e' || letra_input == 'i' || letra_input == 'o' || letra_input == 'u' || letra_input == 'A' || letra_input == 'E' || letra_input == 'I' || letra_input == 'O' || letra_input == 'U')
    {
        printf("O caractere ' %c ' é uma vogal", letra_input);
    }
    else if (valor_ascii >= 32 && valor_ascii <= 47 || valor_ascii >= 58 && valor_ascii <= 64 || valor_ascii >= 91  && valor_ascii <= 96 || valor_ascii >= 123  && valor_ascii <= 126)
    {
        printf("O caractere ' %c ' não é uma letra alfabética", letra_input);
    } else {
        printf("O caractere ' %c ' é uma consoante", letra_input);
    }

    return 0;
}
