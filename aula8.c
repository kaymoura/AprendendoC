//LISTA ENCADEADA

#include<stdio.h>
#include<string.h>
#include<locale.h>

struct shaba_aluno  //estrutura(caixa) chamada shaba_aluno que contém os itens abaixo:
{
    char matricula[10]; //char: string, é 1 caracter
    char nome[100];
    char curso[50];
    int ano_nascimento;
} aluno[2]; //mostrar a qtd de matriculas de alunos

int main()
{
//struct shaba_aluno aluno1;
    setlocale(LC_ALL, "portuguese");

    for(int i = 0; i < 2; i++)  //i: inicializa em inteiro =0 i < 5: eqto for menor que 5 irá rodar em looping até chegar em 5 | i++: incrementa a posição até o 5
    {
        printf("Informe a matrícula do aluno: ");
        fgets(aluno[i].matricula,10,stdin); //fgets: limpa o buffer de memoria
//aluno.1: pega a estrutura dentro do struct
//matricula: numero da matricula
//10: numero do vetor
//stdin: standart input: pega oq o usuário digita no teclado

        printf("Informe o nome do aluno:");
        fgets(aluno[i].nome,10,stdin);

        printf("Informe o curso do aluno:");
        fgets(aluno[i].curso,50,stdin);

        printf("Informe o ano de nascimento: ");
        scanf("%d",&aluno[i].ano_nascimento);
        getchar(); //faz com que contenha o espaçamento entre os printf's
    }

    for(int i = 0; i < 2; i++)
    {
        printf("==========DADOS CADASTRADOS==========\n");
        printf("Matrícula: %s\n",aluno[i].matricula);
        printf("Nome: %s\n",aluno[i].nome);
        printf("Curso: %s\n",aluno[i].curso);
        printf("Ano de Nascimento: %d\n",aluno[i].ano_nascimento);
    }
    return 0;
}
