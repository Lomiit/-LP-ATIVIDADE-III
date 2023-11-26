#include <stdio.h>

int main() {
    int numeros[5];
    int qtdImpares = 0;
    int qtdNegativos = 0;
    int maior, menor;
    int somaPares = 0;
    int somaTotal = 0;
    int qtdPares = 0;
    float mediaPares = 0, mediaTotal = 0;

    for (int i = 0; i < 5; ++i) {
        printf("Digite o %do número: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 != 0) {
            qtdImpares++;
        }

        if (numeros[i] < 0) {
            qtdNegativos++;
        }

        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }
        if (i == 0 || numeros[i] < menor) {
            menor = numeros[i];
        }

        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
            qtdPares++;
        }

        somaTotal += numeros[i];
    }

    mediaPares = (qtdPares > 0) ? somaPares / qtdPares : 0;

    mediaTotal = somaTotal / 5;

    printf("\nResultados:\n");
    printf("Quantidade de números ímpares: %d\n", qtdImpares);
    printf("Quantidade de números negativos: %d\n", qtdNegativos);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média de números pares: %.2f\n", mediaPares);
    printf("Média de todos os números: %.2f\n", mediaTotal);

    return 0;
}
