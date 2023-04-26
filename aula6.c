#include<stdio.h>
#include<locale.h>

// define o tamanho da pilha, delimitando
#define TAMPILHA 10

int pilha[TAMPILHA] = {0,0,0,0,0,0,0,0,0,0};  // inicializa a pilha para não pegar lixo de memoria.
int topo = 0; //numero de elementos, numero do topo é numero na onde ta vazio na pilha

//Função lista elementos
void lista_elementos()
{
    system("color 02");
    printf("\n=====================PILHA ATUAL=====================\n");

    // inicializa variavel/ condição/ incrementa
    for(int i=0; i<TAMPILHA; i++)
    {
        printf("-");
        printf("|%d|",pilha[i]);
        printf("-");
    }
    printf("\n\nTopo: %d\n\n", topo);
}


//Função para inserir elementos
void push()
{
    system("color 05");
    int val; // vai criar uma variavel para receber o numero do usuario

    printf("Digite um número inteiro: ");  //printa na tela a pergunta ao usuario
    scanf("%d", &val); // coloca o valor informado na memoria

    if(topo<TAMPILHA)  // topo contador
    {
        pilha[topo] = val; // a pilha vai receber no topo o valor da variavel que o usuario digitar
        topo++;
        lista_elementos();

    }
    else
    {
        printf("Mano, não cabe mais");  // topo == TAMPILHA
    }

}

//Função remover elementos da pilha
void pop()
{
    system("color 05");
    if(topo > 0)  //Para remover o topo tem que ser maior que 0
    {
        /* Para remover um elemento o topo tem que ser -1, porque se removermos
        * somente o topo não tera ninguem para apagar pois estará vazio
        */
        pilha[topo-1] = 0;
        topo = topo - 1; // o topo vai decrementando
        lista_elementos();

    }
    else
    {
        printf("Pilha vazia!");  // topo == TAMPILHA
    }
}

//Limpa a pilha
void clean()
{
    system("color 04");
    for(int i=0; i < TAMPILHA; i++)
    {
        pilha[i]=0;
    }
    topo = 0;

    printf("Pronto pilha vazia!");
}

int main()
{
    system("color 05");
    int opcao = 0;
    setlocale(LC_ALL,"Portuguese"); //linguagem local convertido pro português
    printf("\n     SEJA BEM-VINDO");

    // Apresenta menu
    do
    {
        printf("\n\n Selecione a opção abaixo\n\n");
        printf(" [ 1] - Inserir (push)\n");
        printf(" [ 2] - Remover (pop)\n");
        printf(" [ 3] - Listar \n");
        printf(" [ 4] - Limpa a fila \n");
        printf(" [-1] - Sair \n\n");
        printf(" Digite a opção desejada:\n");
        scanf("%d", &opcao);
        system("cls");

        // switch case nao reconhece faixa de valores, so compara numeros
        switch(opcao)
        {
        case 1: //inserir
            push();
            break;
        case 2: //remover
            pop();
            break;
        case 3: //listar
            lista_elementos();
            break;
        case 4: //limpar a fila
            clean();
            break;
        case -1: //Sair do menu de opções
            break;
        default:
            printf("\n Opção Inválida\n\n");
        }
    }
    while (opcao != -1);

    return 0;
}
