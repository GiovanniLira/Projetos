#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
        setlocale(LC_ALL,"PORTUGUESE");
    /* BLOCO DE CONDIÇÃO SIMPLES

    printf("Hello World\n");
 
    int respostaCerta = 10; 
    int input;

    printf("Chute um número\n");
    scanf("%d",&input);

    if(input == respostaCerta)
    {
    printf("\nA resposta está certa");
    } 
    else
    {
        printf("Está errado o resultado");
        printf("\nO certo seria %d", respostaCerta);
    }*/

    //CONDIÇÃO COMPOSTA
    
    /*int opcao = 2;

    if (opcao == 1)
    {
        printf("Opcao selecionada foi 1");
    }
    else if (opcao == 2)
    {
        printf("Opcao selecionada foi 2");
    }
    else
    {
        printf("Opcao Inválida");
    }*/

    int numero1 = 30;
    int numero2 = 20;

    if(numero1 < numero2)
    {
        printf("Hello World\n");
    }
    if(numero1 > numero2)
    {
        printf("Olá mundo");
    }
    //SE NÃO FOR MAIOR E NEM MENOR QUE O OUTRO VAI CAIR NESSA CONDIÇÃO
    else{
        printf("Pani no sistema. Alguém me desconfigurou");
    }

}