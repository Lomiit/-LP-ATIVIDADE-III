#include <stdio.h>

int main()
{

    char nomes[5][50];
    int idades[5];
    int i;
    int j;
    float notas[5][3];
    float medias[5];

    for (i = 0; i < 5; ++i)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &idades[i]);

        printf("Digite as 3 notas do aluno %d (separadas por espaços): ", i + 1);
        for (j = 0; j < 3; ++j)
        {
            scanf("%f", &notas[i][j]);
        }
    }

    system("CLS || CLEAR");

    printf("\nResultados:\n");
    for (i = 0; i < 5; ++i)
    {

        float soma = 0.0;
        for (j = 0; j < 3; ++j)
        {
            soma += notas[i][j];
        }
        medias[i] = soma / 3;

        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", nomes[i]);
        printf("Idade: %d\n", idades[i]);
        printf("Notas: %.2f, %.2f, %.2f\n", notas[i][0], notas[i][1], notas[i][2]);
        printf("Média: %.2f\n", medias[i]);

        // Classificação do aluno
        if (medias[i] >= 7.0)
        {
            printf("Situação: Aprovado\n");
        }
        else if (medias[i] >= 5.0)
        {
            printf("Situação: Em recuperação\n");
        }
        else
        {
            printf("Situação: Reprovado\n");
        }
    }

    return 0;
}
