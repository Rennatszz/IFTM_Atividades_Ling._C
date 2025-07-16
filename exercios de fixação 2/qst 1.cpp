#include <stdio.h>
int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Numeros pares de 0 ate %d:\n\n", num);
    for (int i = 0; i <= num; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
