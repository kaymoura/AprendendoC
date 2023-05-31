/*Acentua��o em C:
A linguagem C por si s� n�o possui suporte nativo para acentua��o,
 pois trata os caracteres como valores num�ricos. No entanto, voc�
  pode lidar com acentua��o utilizando codifica��es de caracteres,
  como a ASCII ou a Unicode, e as sequ�ncias de escape correspondentes.
  Por exemplo:*/


#include <stdio.h>

int main() {
    char ch = '�';  // Caractere acentuado '�'

    printf("O caractere �: %c\n", ch);

    return 0;
}
/*
Neste exemplo, atribu�mos o caractere '�' � vari�vel ch e, em seguida,
 imprimimos seu valor usando o especificador de formato %c. Dependendo
  da codifica��o do arquivo-fonte e da configura��o do ambiente de execu��o,
   voc� pode precisar ajustar as configura��es para garantir que os caracteres
    acentuados sejam exibidos corretamente.*/
