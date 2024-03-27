#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    /*Setando variavel char*/
    char letra = 'G';

    if(letra) /*Se letra for true...*/
    {
        printf("Oiee");
    }

    printf("\n O código da letra é %d", letra); /*Vai dizer qual o código da letra G*/

    if(letra == 71) /*Se a variavel letra recebe o código 71...*/
    {
        printf("\nA letra é G\n");
    }

char letra1 = 'G', letra2 = 'I', letra3 = 'O', letra4 = 'V', letra5 = 'A', letra6 = 'N', letra7 = 'I';

printf("%c%c%c%c%c%c%c",letra1,letra2,letra3,letra4,letra5,letra6,letra7); /*c é para ler as variaveis em caracteres*/

printf(" e o  codigo do nome é :%d,%d,%d,%d,%d,%d,%d",letra1,letra2,letra3,letra4,letra5,letra6,letra7); /*d é para ler as variaveis em caracteres*/


}