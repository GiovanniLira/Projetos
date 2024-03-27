#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    //Pemite usar acentos
    setlocale(LC_ALL,"");

    //int x = 10;
    //int y = 30;
    printf("HelloWorld\n");
    //LENDO VALOR DE INTEIROS

    int a = 50;
    printf("O valor de a é %d\n", a);
    scanf("%d", &a);
    printf("A variavel A passou de 50 para o valor de %d", a);

    //lENDO VALOR DE QUEBRADOS
    float b = 2.5;
    printf("\nA nota do aluno foi %f\n", b);
    scanf("\n%f", &b);
    printf("A nova nova do aluno foi %f", b);

    //LENDO VALOR DE CARACTERES
    char letra = 'G';
    printf("\nA primeira letra do seu nome é %c\n", letra);
    fflush(stdin);
    scanf("%c", &letra);
    printf("A nova primeira letra é  %c", letra);
}
