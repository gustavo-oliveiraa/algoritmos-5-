/*5. Fa�a um programa que pergunte ao usu�rio qual a letra inicial do seu sexo (masculino/feminino) e
escreva por extenso o sexo informado, usando o operador condicional tern�rio.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char sexo;
	
	printf("Digite a letra inicial do seu sexo |M| - masculino |F| - feminino:");
	scanf("%c", &sexo);
	fflush(stdin);
	
	sexo = toupper(sexo);
	
	system("cls");
	
	sexo == 'M' ? printf("Sexo masculino.\n") : printf("Sexo feminino.\n");
		
	system("pause");
    return 0;
}
