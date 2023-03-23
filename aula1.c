#include<stdio.h> // diretorio e arquivo de cabecalho

/*
Especificador de formato
int %d
float %f
double %lf
*/

void incrementa(int shaba){
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n\n", shaba);
    printf("Depois de incrementar \n");
    printf("O contador vale %d\n\n", ++shaba);
}

int main()
{
    int contador = 10;

    printf("Antes de Incrementar.\n");
    printf("O contador vale %d\n\n", contador);

    incrementa(contador);

    printf("Depois de Incrementar.\n");
    printf("O contador vale %d\n\n", contador);

    return 0;
}
