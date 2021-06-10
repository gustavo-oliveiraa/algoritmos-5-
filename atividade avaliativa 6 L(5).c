/*6. Desenvolva um programa em C que apresente um menu de op��es numa janela �bem� amig�vel ao
usu�rio, onde este dever� escolher qual a regi�o do Brasil que ele gostaria de conhecer. Ap�s o usu�rio
informar esta regi�o, limpe toda a janela e escreva no meio dela qual foi a op��o do usu�rio. Lembrando
que as regi�es dever�o ser apresentadas conforme o seguinte menu de op��es:
Menu de Op��es
============
1 � Norte
2 � Nordeste
3 � Centro-Oeste
4 � Sudeste
5 � Sul
0 � Sair do programa*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	
	printf("Menu de Op��es:\n");
	printf("=============\n");
	printf("1 � Norte.\n");
	printf("2 � Nordeste.\n");
	printf("3 � Centro-Oeste.\n");
	printf("4 � Sudeste.\n");
	printf("5 � Sul.\n");
	printf("0 � Sair do programa.\n");

	do{
	
		printf("\nDigite a n�mera��o da regi�o que deseja conhecer:");
		scanf("%d", &numero);
		fflush(stdin);
	
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		if(numero == 1)
			printf("\t \t \t \t \tSua op��o foi a regi�o Norte!\n");
				else if(numero == 2)
					printf("\t \t \t \t \tSua op��o foi a regi�o Nordeste!\n");
						else if(numero == 3)
							printf("\t \t \t \t \tSua op��o foi a regi�o Centro-Oeste!\n");
								else if(numero == 4)
									printf("\t \t \t \t \tSua op��o foi a regi�o Sudeste!\n");
										else if(numero == 5)
											printf("\t \t \t \t \tSua op��o foi a regi�o Sul!\n");
												else if(numero==0)
													printf("\t \t \t \t \tSaindo do programa...\n");
														else
	 														printf("\t \t \t \t \tN�mero n�o encontrado, no programa.\n");
	
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	}while(numero!=0);
	
	system("pause");
    return 0;
}
