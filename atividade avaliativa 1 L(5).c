/*1. Elabore um programa que solicite ao usuário um valor percentual a ser calculado. Este cálculo deverá
ocorrer sobre um valor constante igual a 555. O programa deverá calcular o percentual desejado e
apresentar o resultado calculado deste percentual.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float percentual, porcentagem;
	
	printf("Digite o percentual desejado:");
	scanf("%f", &percentual);
	fflush(stdin);
	
	porcentagem = (percentual * 555) / 100;
	
	printf("%.0f%% de 555 = %.2f\n", percentual, porcentagem);
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
    return 0;
}
