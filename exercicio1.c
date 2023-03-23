#include<stdio.h>

int main()
{
    // Declarar variaveis
    int ponteiro;

    // Leitura de teclado
    printf("Digite um valor inteiro qualquer: ");
    scanf("%d", &ponteiro);

    // Defini ponteiro
    int* p = &ponteiro;

    // Exibir
    printf("\nO valor da variavel ponteiro = %d.\n", *p);
    printf("Endereco da memoria da variavel ponteiro = %d.\n", p);

    return 0;
}
