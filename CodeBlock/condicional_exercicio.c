#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    /*Defini variaveis do tipo números quebrasdos*/
    float nota1, nota2, nota3, media;

    printf("Digite as 3 notas que o aluno recebeu :");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    printf("\nAs notas foram %f %f e %f", nota1, nota2, nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nA média do aluno é %f", media);

    if (media >= 7)
    {
        printf("\nO aluno passou de ano");
    }


    else if(media >= 6 && media < 7) /* && == AND*/
    {
        printf("\nO aluno irá para a recuperação");
    }
    else{
        printf("\nO aluno foi reprovado");
    }
}
