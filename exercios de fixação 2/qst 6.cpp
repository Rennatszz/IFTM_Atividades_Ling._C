#include <stdio.h>

int main() {
    int num, i;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num);

        if (num < 10) {
            printf("\nSeu numero e menor que 10\n\n");
        } else if (num > 10) {
            printf("\nSeu numero e maior que 10\n\n");
        } else {
            printf("\nSeu numero e igual a 10\n\n");
        }
    }

    return 0;
}
