//LISTA ENCADEADA

#include<stdio.h>
#include<string.h>
#include<locale.h>

struct shaba_aluno  //estrutura(caixa) chamada shaba_aluno que cont�m os itens abaixo:
{
    char matricula[10]; //char: string, � 1 caracter
    char nome[100];
    char curso[50];
    int ano_nascimento;
} aluno[2]; //mostrar a qtd de matriculas de alunos

int main()
{
//struct shaba_aluno aluno1;
    setlocale(LC_ALL, "portuguese");

    for(int i = 0; i < 2; i++)  //i: inicializa em inteiro =0 i < 5: eqto for menor que 5 ir� rodar em looping at� chegar em 5 | i++: incrementa a posi��o at� o 5
    {
        printf("Informe a matr�cula do aluno: ");
        fgets(aluno[i].matricula,10,stdin); //fgets: limpa o buffer de memoria
//aluno.1: pega a estrutura dentro do struct
//matricula: numero da matricula
//10: numero do vetor
//stdin: standart input: pega oq o usu�rio digita no teclado

        printf("Informe o nome do aluno:");
        fgets(aluno[i].nome,10,stdin);

        printf("Informe o curso do aluno:");
        fgets(aluno[i].curso,50,stdin);

        printf("Informe o ano de nascimento: ");
        scanf("%d",&aluno[i].ano_nascimento);
        getchar(); //faz com que contenha o espa�amento entre os printf's
    }

    for(int i = 0; i < 2; i++)
    {
        printf("==========DADOS CADASTRADOS==========\n");
        printf("Matr�cula: %s\n",aluno[i].matricula);
        printf("Nome: %s\n",aluno[i].nome);
        printf("Curso: %s\n",aluno[i].curso);
        printf("Ano de Nascimento: %d\n",aluno[i].ano_nascimento);
    }
    return 0;
}
