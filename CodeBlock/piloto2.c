#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    //Pemite usar acentos
    setlocale(LC_ALL,"");

    float nota1, nota2;

    printf("Digite a primeira nota\n");
    scanf("%f", &nota1);

    printf("digite a segunda nota\n");

    scanf("%f", &nota2);

    printf("\n***********************************\n");

    int resultado = (nota1 - nota2);
    //valor absoluto de uma variavel 
    int abs_valor = abs(resultado);

    printf("A subtracao de %f e %f é : %d\n", nota1, nota2, resultado);

    printf("O valor absoluto desse resultado é %d\n", abs_valor);

}
