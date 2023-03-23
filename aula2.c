#include<stdio.h> // diretorio e arquivo de cabecalho

void incrementa(int* shaba){ // a funcao recebe endereco de memoria que aponta para tipo inteiro
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", (*shaba)); // Pega o conteudo dentro do endereco de memoria
    printf("O contador vale %d\n\n", shaba);
    printf("Depois de incrementar \n");
    printf("O contador vale %d\n", ++(*shaba));
    printf("O contador vale %d\n\n", shaba);
}

int main()
{
    int shaba = 10;

    printf("Antes de Incrementar.\n");
    printf("O contador vale %d\n", shaba);
    printf("O contador vale %d\n\n", &shaba); // Endereço da memoria

    incrementa(&shaba); // chamada de função - mandando o endereço da memoria

    printf("Depois de Incrementar.\n");
    printf("O contador vale %d\n", shaba);
    printf("O contador vale %d\n\n", &shaba); // Endereço da memoria

    return 0;
}
