#include <stdio.h>
int main() {
	int num;
	
	do {
		printf("Insira um valor entre 0 e 10:\n");
		scanf("%d", &num);
	}while (num < 0 || num > 10);
	
	printf("Tudo Certo, obrigado!\nO valor escolhido e %d\n", num);
	
	return 0;
}
