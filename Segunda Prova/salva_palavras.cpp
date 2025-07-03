#include <stdio.h>
int main () {
	FILE *arq = fopen("memoria.txt", "w");
	char palavra[50];
	int i, n;
	
	printf("Insira 5 palavras diferentes:\n");
	
	for (i = 0; i < 5; i++) {
	scanf("%s", palavra);
	fprintf(arq, "%s\n", palavra);
	}
	printf("\nTente lembrar das palavras salvas!");
	fclose(arq);
	return 0;
}
