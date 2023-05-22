/*Kaylane, Jones, Felipe, Yan, Pedro, Luis*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMPILHA 100

char pilha[TAMPILHA];
int topo = -1;

void push(char valor) {
    pilha[++topo] = valor;
}

char pop() {
    return pilha[topo--];
}

int se_vazio() {
    return topo == -1;
}

int esta_valido(char* expressao) {
    int i;
    for (i = 0; expressao[i] != '\0'; i++) {
        char letras = expressao[i];
        if (letras == '(' || letras == '[' || letras == '{') {
            push(letras);
        } else if (letras == ')' || letras == ']' || letras == '}') {
            if (se_vazio() || (letras == ')' && pop() != '(') || (letras == ']' && pop() != '[') || (letras == '}' && pop() != '{')) {
                return 0;
            }
        }
    }
    return se_vazio();
}

int main() {
    char expressao[TAMPILHA];

    printf("Digite a expressao: ");
    fgets(expressao, TAMPILHA, stdin);
    expressao[strcspn(expressao, "\n")] = '\0';

    if (esta_valido(expressao)) {
        printf("A expressao esta valida!\n");
    } else {
        printf("A expressao esta invalida!\n");
    }

    return 0;
}
