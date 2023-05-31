/*A fun��o scanf � usada para ler dados de entrada do usu�rio ou de um arquivo em C.
 Ela recebe como argumentos um ou mais especificadores de formato e as vari�veis em
 que os valores lidos ser�o armazenados.
 Aqui est� um exemplo de uso da fun��o scanf: */


#include <stdio.h>

int main() {
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade); // L� um valor inteiro e o armazena em idade

    printf("A idade digitada �: %d\n", idade);

    return 0;
}
/*Neste exemplo, pedimos ao usu�rio para digitar a idade,
 e a fun��o scanf l� o valor inteiro digitado e o armazena na vari�vel idade.*/
