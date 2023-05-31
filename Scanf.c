/*A função scanf é usada para ler dados de entrada do usuário ou de um arquivo em C.
 Ela recebe como argumentos um ou mais especificadores de formato e as variáveis em
 que os valores lidos serão armazenados.
 Aqui está um exemplo de uso da função scanf: */


#include <stdio.h>

int main() {
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade); // Lê um valor inteiro e o armazena em idade

    printf("A idade digitada é: %d\n", idade);

    return 0;
}
/*Neste exemplo, pedimos ao usuário para digitar a idade,
 e a função scanf lê o valor inteiro digitado e o armazena na variável idade.*/
