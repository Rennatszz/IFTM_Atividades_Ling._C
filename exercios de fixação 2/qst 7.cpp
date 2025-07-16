#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n---Bem-vindo, selecione uma opcao (1 2 3)---\n");
        printf("\n1. Exibir mensagem secreta\n");
        printf("\n2. Exibir data secreta\n");
        printf("\n3. Sair\n");
        scanf("%d", &opcao);
        

        switch (opcao) {
            case 1:
                printf("\nOla ser humano estudante do IFTM\n");break;

            case 2:
                    printf("\nA data secreta e 28/09/2023\n");break;

            case 3:
                printf("\nSaindo do programa...\n");break;
                
            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 3);

    return 0;
}