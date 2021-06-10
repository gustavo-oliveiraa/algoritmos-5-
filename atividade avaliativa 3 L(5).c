/*3. Faça um programa que leia um caractere e apresente o caractere lido na forma caractere, decimal, octal
e hexadecimal, sendo um em cada linha.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char letra;
	
	printf("Digite um caracter: ");
	scanf("%c", &letra);
	fflush(stdin);
	
	printf("\nCaractere:%c.\n", letra);
	printf("Decimal:%i.\n", letra);
	printf("Octal:%o.\n", letra);
	printf("Hexadecimal:%x.\n", letra);
	
	
	system("pause");
	return 0;
}
