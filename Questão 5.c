#include <stdio.h>

int main() {
    int Vendas = 100;
    char nomesProdutos[100][50];
    float precosUnitarios[100];
    int quantidades[100];
    int numVendas = 0;
    int opcao;

    do {
        printf("\n----- Sistema de Vendas -----\n");
        printf("1. Adicionar Venda\n");
        printf("2. Exibir Total de Vendas\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (numVendas < Vendas) {
                    printf("Digite o nome do produto: ");
                    scanf("%s", nomesProdutos[numVendas]);

                    printf("Digite o preço unitário: ");
                    scanf("%f", &precosUnitarios[numVendas]);

                    printf("Digite a quantidade vendida: ");
                    scanf("%d", &quantidades[numVendas]);

                    printf("Venda registrada com sucesso!\n");
                    numVendas++;
                } else {
                    printf("Limite máximo de vendas atingido.\n");
                }
                break;

            case 2:
                if (numVendas > 0) {
                    float totalVendas = 0.0;
                    printf("\nVendas Realizadas:\n");
                    for (int i = 0; i < numVendas; ++i) {
                        printf("Produto: %s, Preço Unitário: %.2f, Quantidade: %d\n",
                               nomesProdutos[i], precosUnitarios[i], quantidades[i]);
                        totalVendas += precosUnitarios[i] * quantidades[i];
                    }
                    printf("\nTotal de Vendas: R$ %.2f\n", totalVendas);
                } else {
                    printf("Nenhuma venda registrada.\n");
                }
                break;

            case 3:
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
