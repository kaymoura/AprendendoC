#include<stdio.h>
#include<locale.h>

// define o tamanho da pilha, delimitando
#define TAMPILHA 10

int pilha[TAMPILHA] = {0,0,0,0,0,0,0,0,0,0};  // inicializa a pilha para n�o pegar lixo de memoria.
int topo = 0; //numero de elementos, numero do topo � numero na onde ta vazio na pilha

//Fun��o para inserir elementos
void push()
{
    int val; // vai criar uma variavel para receber o numero do usuario

    setlocale(LC_ALL,"Portuguese"); //linguagem local convertido pro portugu�s
    printf("Digite um n�mero inteiro: ");  //printa na tela a pergunta ao usuario
    scanf("%d", &val); // coloca o valor informado na memoria

    if(topo<TAMPILHA){ // topo contador
        pilha[topo] = val; // a pilha vai receber no topo o valor da variavel que o usuario digitar
        topo++;
        lista_elementos();

    } else {
        printf("Mano, n�o cabe mais");  // topo == TAMPILHA
    }

}

int main()
{

    return 0;
}
