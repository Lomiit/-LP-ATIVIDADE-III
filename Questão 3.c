#include <stdio.h>

#define CONTATOS 100

int main() {
    char nomes[CONTATOS][50];
    char telefones[CONTATOS][15];
    int Contatos1 = 0;
    int opcao;
    int i;

    do {
        // Menu de opções
        printf("\n----- Agenda Telefônica -----\n");
        printf("1. Adicionar Contato\n");
        printf("2. Mostrar Contatos\n");
        printf("3. Encerrar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Adicionar contato
                if (Contatos1 < CONTATOS) {
                    printf("Digite o nome do contato: ");
                    scanf("%s", nomes[Contatos1]);

                    printf("Digite o número de telefone: ");
                    scanf("%s", telefones[Contatos1]);

                    printf("Contato adicionado com sucesso!\n");
                    Contatos1++;
                } else {
                    printf("A agenda está cheia. Não é possível adicionar mais contatos.\n");
                }
                break;

            case 2:
                if (Contatos1 > 0) {
                    printf("\nContatos Cadastrados:\n");
                    for (i = 0; i < Contatos1; i++) {
                        printf("%d. Nome: %s, Telefone: %s\n", i + 1, nomes[i], telefones[i]);
                    }
                } else {
                    printf("Nenhum contato cadastrado.\n");
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
