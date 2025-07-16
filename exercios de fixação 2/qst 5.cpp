#include <stdio.h>
#include <string.h>

int main () {
	char nome [80];
	printf("Qual o seu nome? \n");
	fgets(nome, 80, stdin);
	
	nome[strcspn(nome, "\n")] = '\0';
	
	printf("\nOla:\n");
	
    for (int i = 0; nome[i] != '\0'; i++) { 
        printf("\n%c", nome[i]);
    }
return 0;
}