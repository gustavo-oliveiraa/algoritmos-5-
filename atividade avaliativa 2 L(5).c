/*2. Desenvolva um programa em C que leia três valores numéricos e apresente o maior valor informado no
meio de uma janela limpa.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador, numero[3];
	
	
	for(contador=0; contador<3; contador++){
		printf("Digite o número %d:", contador + 1);
		scanf("%d", &numero[contador]);
		fflush(stdin); 
	}
	
	if(numero[0] > numero[1]&& numero[0] > numero[2]){
		system("cls");
		printf("O maior número é %d.\n", numero[0]);
	}
	else if(numero[1] > numero[0] && numero[1] > numero[2]){
		system("cls");
		printf("O maior número é %d.\n", numero[1]);
	}
	else{
		system("cls");
		printf("O maior número é %d.\n", numero[2]);
	}
	
	system("pause");
    return 0;
}
