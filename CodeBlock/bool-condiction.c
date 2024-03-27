#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /*Biblioteca de usar Acentos*/
#include <stdbool.h> /* Biblioteca Booleaana*/
void main()
{
        setlocale(LC_ALL,"");

         bool a = true, b = true; /*Variaveis Booleanas*/

    if(a) /*Se a for true...*/
    {
        printf("A é verdadeiro\n");
    }

    else /*Se A não for true...*/
    {
        printf("A é falso\n");    
    }
    
    if(b)/*sE B for verdadeiro...*/
    {
        printf("B é verdadeiro");
    }
    else{ /*Se B não for true...*/
        printf("B é falso");
    }
}