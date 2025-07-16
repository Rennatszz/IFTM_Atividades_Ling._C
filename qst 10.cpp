#include <stdio.h>

int main() {
    int quantidade, i;
    float num, soma = 0, media;

    printf("Quantos numeros voce deseja digitar? ");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &num);
        soma += num;
    }

    media = soma / quantidade;
    printf("A media aritmetica e: %.2f\n", media);

    return 0;
}
