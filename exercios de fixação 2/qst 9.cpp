#include <stdio.h>
#include <string.h>

int main() {
    char senhaCorreta[] = "1234";
    char tentativa[20];
    int tentativas = 0;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%s", tentativa);

        if (strcmp(tentativa, senhaCorreta) == 0) {
            printf("Acesso liberado.\n");
            return 0;
        }

        tentativas++;
    }

    printf("Acesso bloqueado.\n");
    return 0;
}
