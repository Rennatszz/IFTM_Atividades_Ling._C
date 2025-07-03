#include <stdio.h>
#include <stdlib.h>

	int main(){
		int total = 0,opcao;
		
		printf("TESTE PARA DESCOBRIR QUAL O SEU NIVEL DE ANSIEDADE\n(Inicial, Moderado ou Grave)\nPor favor, responda sinceramente as perguntas abaixo:\n");
		
		
		
	//Pergunta 1
	printf("\n1) Voce tem dificuldade em controlar sua ansiedade e ela interfere em alguma atividade no dia a dia?\n");
	printf("1 - Sim\n");	
	printf("2 - Nao\n");		
	printf("Sua resposta: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1: total += 1; break;
		case 2: total += 0; break;
		default: printf("Opcao invalida.\n");
	}
	
	//Pergunta 2
	printf("\n2) Voce nao consegue dormir bem nos dias em que esta mais ansioso?\n");
	printf("1 - Sim\n");	
	printf("2 - Nao\n");		
	printf("Sua resposta: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1: total += 1; break;
		case 2: total += 0; break;
		default: printf("Opcao invalida.\n");
	}
	
	//Pergunta 3
	printf("\n3) Voce tem irritabilidade, falta de paciencia ou dificuldade em concentrar seu pensamento em alguma coisa?\n");
	printf("1 - Sim\n");	
	printf("2 - Nao\n");		
	printf("Sua resposta: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1: total += 1; break;
		case 2: total += 0; break;
		default: printf("Opcao invalida.\n");
	}
	
	//Pergunta 4
	printf("\n4) Tem alguma coisa que, quando voce faz, te deixa muito ansioso e por causa disso voce evita fazer?\n");
	printf("1 - Sim\n");	
	printf("2 - Nao\n");		
	printf("Sua resposta: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1: total += 1; break;
		case 2: total += 0; break;
		default: printf("Opcao invalida.\n");
	}
	
	//Pergunta 5
	printf("\n5) Voce desconta sua ansiedade em alguma coisa ou, quando esta ansioso, come mais que o normal?\n");
	printf("1 - Sim\n");	
	printf("2 - Nao\n");		
	printf("Sua resposta: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1: total += 1; break;
		case 2: total += 0; break;
		default: printf("Opcao invalida.\n");
	}
	
	//Pergunta 6
	printf("\n6) Das fobias ou medos que foram falados nessa primeira aula, você tem medo de multidoes, de lugares fechados, de altura, de sentir dor ou de aviao?\n");
	printf("1 - Sim\n");	
	printf("2 - Nao\n");		
	printf("Sua resposta: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1: total += 1; break;
		case 2: total += 0; break;
		default: printf("Opcao invalida.\n");
	}
	
	//Pergunta 7
	printf("\n7) Voce toma ou ja tomou algum remedio para depressao, ansiedade ou insonia?\n");
	printf("1 - Sim\n");	
	printf("2 - Nao\n");		
	printf("Sua resposta: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1: total += 1; break;
		case 2: total += 0; break;
		default: printf("Opcao invalida.\n");
	}
	
	//Pergunta 8
	printf("\n8) Quando voce sabe que chegou uma mensagem no seu celular, voce fica ansioso para ler imediatamente?\n");
	printf("1 - Sim\n");	
	printf("2 - Nao\n");		
	printf("Sua resposta: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1: total += 1; break;
		case 2: total += 0; break;
		default: printf("Opcao invalida.\n");
	}
	
	//Pergunta 9
	printf("\n9) Voce fica ansioso em situacoes como falar em publico, reunioes, apresentacao de algo diante de outras pessoas?\n");
	printf("1 - Sim\n");	
	printf("2 - Nao\n");		
	printf("Sua resposta: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1: total += 1; break;
		case 2: total += 0; break;
		default: printf("Opcao invalida.\n");
	}
	
	//Pergunta 10
	printf("\n10) Voce tem alguma dessas sensacoes quando esta ansioso: suor excessivo, batimento acelerado do coracao, tremores no corpo, medo sem razao especifica?\n");
	printf("1 - Sim\n");	
	printf("2 - Nao\n");		
	printf("Sua resposta: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1: total += 1; break;
		case 2: total += 0; break;
		default: printf("Opcao invalida.\n");
	}
	
	
	//Avaliacao do resultado do nivel de ansiedade
	
	printf("\nPontuacao total: %d\n", total);
	
	if(total <= 3) {
		printf("Ansiedade Inicial (01 a 03 pontos): Seu nivel de ansiedade esta no inicio. As aulas do Super Seminario ajudarao voce a nao aumentar sua ansiedade.\n");
	}else if (total <= 5) {
		printf("Ansiedade Moderada (04 a 05 pontos): Seu nivel de ansiedade e moderado. As aulas do Super Seminario ajudarao voce a nao subir para o nivel grave.\n");
	}else if (total <= 10) {
		printf("Ansiedade Grave (06 a 10 pontos): Seu nivel de ansiedade e grave. Nao perca nenhuma aula do Super Seminario e baixe todos os materiais que vamos disponibilizar, pois eles ensinarao como voce deve lidar com isso.\n");
	}
	system ("pause");
	getchar();
	getchar();
	return 0;
}
