#include <stdio.h>
int main () {
	int i, n;
	printf("Digite um numero inteiro positivo:\n");
	scanf("%d", &n, &i);
	
		for (i = 1; i <= 10; i++) {
	printf("%d x %d = %d\n", n,  i, n * i);
}
return 0;
}