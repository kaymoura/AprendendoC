#include<stdio.h> // diretorio e arquivo de cabecalho
#include<locale.h> // habilita a função de acentuação

// define o tamanho da fila
#define TAMFILA 10

int fila[TAMFILA] = {0,0,0,0,0,0,0,0,0,0};
int head = 0; //primeiro numero
int tail = 0; //numero de elementos

void lista_elementos()
{
    printf("\n=====================FILA ATUAL=====================\n");

    // inicializa variavel/ condição/ incrementa
    for(int i=0; i<TAMFILA; i++)
    {
        printf("-");
        printf("|%d|",fila[i]);
        printf("-");
    }
}

//Adiciona o elemento na fila
void enqueue()
{
    int val; // Receber o numero do mardito

    /* Se o num de elementos for menor que a fila - adiciona
    * Se não falamos que a fila esta cheia
    */
    if(tail < TAMFILA)
    {
        printf("\n Informe o valor para adicionar na fila \n");
        scanf("%d",&val);
        fila[tail]= val; // evidencia uma correlação
        tail = tail + 1;
    }
    else
    {
        printf("\n Mano não cabe, fila cheia!");
    }
    lista_elementos(); // Para poder ver o processo
}

// Remover uma pessoa da fila - chamar
void dequeue()
{
    /*  Head so pode ser menor < que o tail
    * Pq se for igual a fila esta vazia, nao tem ninguem para tirar
    */
    if(head < tail)
    {
        fila[head] = 0; // zera o primeiro elemento

        // fazer fila andar, a partir do segundo elemento (índice 1) até o último elemento
        for(int i = head + 1; i < tail; i++)
        {
            fila[i - 1] = fila[i]; // desloca os elementos da fila para a esquerda
        }

        fila[tail - 1] = 0; // remove o último elemento da fila
        tail--; //  para indicar que há um elemento a menos na fila.

    }
    else if (head == tail)
    {
        printf("\tERRO: Fila vazia"); // caso a fila esteja vazia
    }

    lista_elementos(); // mostra a fila
}

//Limpa a fila
void clean()
{
    for(int i=0; i < TAMFILA; i++)
    {
        fila[i]=0;
    }
    head = 0;
    tail = 0;
}

int main()
{
    int opcao = 0;
    setlocale(LC_ALL,"Portuguese"); //linguagem local convertido pro português
    printf("\n     SEJA BEM-VINDO");

    // Apresenta menu
    // Com do entra no menu na primeira vez sem condição e apresenta condição nas proximas.
    do
    {
        printf("\n\n Selecione a opção abaixo\n\n");
        printf(" [ 1] - Inserir (enqueue)\n");
        printf(" [ 2] - Remover (dequeue)\n");
        printf(" [ 3] - Listar \n");
        printf(" [ 4] - Limpa a fila \n");
        printf(" [-1] - Sair \n\n");
        printf(" Digite a opção desejada:\n");
        scanf("%d", &opcao);

        // switch case nao reconhece faixa de valores, so compara numeros
        switch(opcao)
        {
        case 1: //inserir
            enqueue();
            break;
        case 2: //remover
            dequeue();
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
