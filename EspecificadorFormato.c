/*Os especificadores de formato s�o usados em fun��es de entrada e sa�da em C, como o printf e o scanf, para formatar a exibi��o ou leitura dos dados. Aqui est�o alguns exemplos de especificadores de formato comumente usados:

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
    printf("A idade digitada �: %d\n", idade);

    float altura;
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
    printf("A altura digitada �: %.2f metros\n", altura);

    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra); // O espa�o antes do %c ignora poss�veis espa�os em branco
    printf("A letra digitada �: %c\n", letra);

    char nome[50];
    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("O nome digitado �: %s", nome);

    int numero = 10;
    int* ptr = &numero;
    printf("O endere�o de mem�ria de numero �: %p\n", &numero);
    printf("O valor armazenado em ptr �: %p\n", ptr);

    int numero = 255;
    printf("O valor em hexadecimal �: %x\n", numero);
    printf("O valor em hexadecimal com letras mai�sculas �: %X\n", numero);


    return 0;
}
