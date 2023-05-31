/*Struct:
Uma struct em C � uma constru��o de dados que permite agrupar
diferentes vari�veis de tipos diferentes em uma �nica unidade l�gica.
 Ela � �til para armazenar e manipular um conjunto de dados relacionados.
  Aqui est� um exemplo: */


#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person1;  // Declara��o de uma vari�vel do tipo Person

    // Atribui��o de valores aos campos da struct
    strcpy(person1.name, "Jo�o");
    person1.age = 25;

    printf("Nome: %s\n", person1.name);
    printf("Idade: %d\n", person1.age);

    return 0;
}
/*
Neste exemplo, definimos uma struct Person que possui dois campos:
 name (nome) e age (idade). Em seguida, declaramos uma vari�vel person1
  do tipo Person e atribu�mos valores aos campos. Por fim, imprimimos
  os valores dos campos usando o operador de acesso .. */
