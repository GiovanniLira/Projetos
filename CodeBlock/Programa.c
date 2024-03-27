#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{

    //Pemite usar acentos
    setlocale(LC_ALL,"PORTUGUESE");

    printf("Hello World\n");

    int numero1,numero2,numero3;
    
    printf("Digite três numeros\n");
    scanf("%d %d %d", &numero1 ,&numero2, &numero3);

    int multiplicacao = numero1 * numero2 * numero3;

    printf("A multiplicação dos números é : %d", multiplicacao);


}
