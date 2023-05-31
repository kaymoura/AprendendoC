/*Struct:
Uma struct em C é uma construção de dados que permite agrupar
diferentes variáveis de tipos diferentes em uma única unidade lógica.
 Ela é útil para armazenar e manipular um conjunto de dados relacionados.
  Aqui está um exemplo: */


#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person1;  // Declaração de uma variável do tipo Person

    // Atribuição de valores aos campos da struct
    strcpy(person1.name, "João");
    person1.age = 25;

    printf("Nome: %s\n", person1.name);
    printf("Idade: %d\n", person1.age);

    return 0;
}
/*
Neste exemplo, definimos uma struct Person que possui dois campos:
 name (nome) e age (idade). Em seguida, declaramos uma variável person1
  do tipo Person e atribuímos valores aos campos. Por fim, imprimimos
  os valores dos campos usando o operador de acesso .. */
