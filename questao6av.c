#include <stdio.h>
int main()
{
    int numero_input, i, j, aux;
    int numeros[3] = {};
    int numerosOrdenados[] = {};

    for (i = 0; i < 3; i++) //Loop para pedir input de números ao usuário e adicioná-los ao arrau numeros.
    {
        printf("Insira o primeiro número: ");
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 3; i++) //loop que faz a comparação dos números colocados dentro do array.
    {
        for (j = i + 1; j < 3; j++) //loop que compara o primeiro número ao primeiro numero + 1;
        {
            if (numeros[i] > numeros[j])  // caso o primeiro número seja maior que o segundo, é feita a reordenação para organizá-los de forma crescente.
            {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    for (i = 0; i < 3; i++) //loop para printar os números já organizados.
    {
        printf("%d\n", numeros[i]);
    }
}
