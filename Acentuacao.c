/*Acentuação em C:
A linguagem C por si só não possui suporte nativo para acentuação,
 pois trata os caracteres como valores numéricos. No entanto, você
  pode lidar com acentuação utilizando codificações de caracteres,
  como a ASCII ou a Unicode, e as sequências de escape correspondentes.
  Por exemplo:*/


#include <stdio.h>

int main() {
    char ch = 'á';  // Caractere acentuado 'á'

    printf("O caractere é: %c\n", ch);

    return 0;
}
/*
Neste exemplo, atribuímos o caractere 'á' à variável ch e, em seguida,
 imprimimos seu valor usando o especificador de formato %c. Dependendo
  da codificação do arquivo-fonte e da configuração do ambiente de execução,
   você pode precisar ajustar as configurações para garantir que os caracteres
    acentuados sejam exibidos corretamente.*/
