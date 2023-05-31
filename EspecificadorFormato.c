/*Os especificadores de formato são usados em funções de entrada e saída em C, como o printf e o scanf, para formatar a exibição ou leitura dos dados. Aqui estão alguns exemplos de especificadores de formato comumente usados:

%d: para imprimir ou ler um valor inteiro.
%f: para imprimir ou ler um valor de ponto flutuante (float).
%c: para imprimir ou ler um caractere.
%s: para imprimir ou ler uma string.
%p: para imprimir um valor de ponteiro.
%x ou %X: para imprimir um valor em formato hexadecimal.
*/
#include <stdio.h>

int main() {
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade digitada é: %d\n", idade);

    float altura;
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
    printf("A altura digitada é: %.2f metros\n", altura);

    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra); // O espaço antes do %c ignora possíveis espaços em branco
    printf("A letra digitada é: %c\n", letra);

    char nome[50];
    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("O nome digitado é: %s", nome);

    int numero = 10;
    int* ptr = &numero;
    printf("O endereço de memória de numero é: %p\n", &numero);
    printf("O valor armazenado em ptr é: %p\n", ptr);

    int numero = 255;
    printf("O valor em hexadecimal é: %x\n", numero);
    printf("O valor em hexadecimal com letras maiúsculas é: %X\n", numero);


    return 0;
}
