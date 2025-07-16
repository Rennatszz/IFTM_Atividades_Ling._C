#include <stdio.h>
int main() {
    int n, soma = 0;

    printf("Digite numeros inteiros para soma-los e prressione 0 para encerrar:\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        soma += n;
    }

    printf("\ntotal da soma: %d\n", soma);

    return 0;
}
