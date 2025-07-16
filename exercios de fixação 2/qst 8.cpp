#include <stdio.h>

int main() {
    int num, fatorial = 1, i = 1;

    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf("Numero invalido! Digite novamente\n");
        return 1;
    }

    while (i <= num) {
        fatorial *= i;
        i++;
    }

    printf("O fatorial de %d e: %d\n", num, fatorial);

    return 0;
}
