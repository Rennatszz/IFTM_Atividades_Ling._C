#include <stdio.h>
#include <string.h>

int main () {
    FILE *arq = fopen("memoria.txt", "r");
    char palavra[50], resposta[50];
    int i, pontos = 0;

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Agora digite as mesmas 5 palavras uma por uma:\n");

    for (i = 0; i < 5; i++) {
        printf("Palavra %d: ", i + 1);
        scanf("%s", resposta);
        fscanf(arq, "%s", palavra);

        if (strcmp(palavra, resposta) == 0) {
            pontos++;
        }
    }

    fclose(arq);

    // Resultado final do jogo da Memória
    
    printf("\nPontuacao total: %d\n", pontos);
    printf("\nAvaliacao: ");
    if (pontos <= 2) {
        printf("Sua memoria precisa de treino!\n");
    } else if (pontos <= 4) {
        printf("Boa tentativa!\n");
    } else if (pontos == 5) {
        printf("Sua Memoria esta excelente!\n");
    }
 
    return 0;
}

