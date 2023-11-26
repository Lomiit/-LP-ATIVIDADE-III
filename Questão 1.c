#include <stdio.h>
#include <stdlib.h>

int main() {
    char nomes[5][50];
    int idades[5];
    float pesos[5];
    float alturas[5];
    int maisalto = 0, maisbaixo = 0, maiorpeso = 0, menorpeso = 0, maisvelho = 0, maisjovem = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome, idade, peso e altura da %da pessoa: ", i + 1);
        scanf("%s %d %f %f", nomes[i], &idades[i], &pesos[i], &alturas[i]);
    }

    for (i = 1; i < 5; i++) {
        if (alturas[i] > alturas[maisalto]) maisalto = i;
        if (alturas[i] < alturas[maisbaixo]) maisbaixo = i;
        if (pesos[i] > pesos[maiorpeso]) maiorpeso = i;
        if (pesos[i] < pesos[menorpeso]) menorpeso = i;
        if (idades[i] > idades[maisvelho]) maisvelho = i;
        if (idades[i] < idades[maisjovem]) maisjovem = i;
    }

    printf("\nInformações solicitadas:\n");
    printf("A pessoa mais alta é %s, com altura de %.2f metros.\n", nomes[maisalto], alturas[maisalto]);
    printf("A pessoa mais baixa é %s, com altura de %.2f metros.\n", nomes[maisbaixo], alturas[maisbaixo]);
    printf("A pessoa com maior peso é %s, com peso de %.2f kg.\n", nomes[maiorpeso], pesos[maiorpeso]);
    printf("A pessoa com menor peso é %s, com peso de %.2f kg.\n", nomes[menorpeso], pesos[menorpeso]);
    printf("A pessoa mais velha é %s, com idade de %d anos.\n", nomes[maisvelho], idades[maisvelho]);
    printf("A pessoa mais jovem é %s, com idade de %d anos.\n", nomes[maisjovem], idades[maisjovem]);

    return 0;
}
