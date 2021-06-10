/*6. Desenvolva um programa em C que apresente um menu de opções numa janela “bem” amigável ao
usuário, onde este deverá escolher qual a região do Brasil que ele gostaria de conhecer. Após o usuário
informar esta região, limpe toda a janela e escreva no meio dela qual foi a opção do usuário. Lembrando
que as regiões deverão ser apresentadas conforme o seguinte menu de opções:
Menu de Opções
============
1 – Norte
2 – Nordeste
3 – Centro-Oeste
4 – Sudeste
5 – Sul
0 – Sair do programa*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	
	printf("Menu de Opções:\n");
	printf("=============\n");
	printf("1 – Norte.\n");
	printf("2 – Nordeste.\n");
	printf("3 – Centro-Oeste.\n");
	printf("4 – Sudeste.\n");
	printf("5 – Sul.\n");
	printf("0 – Sair do programa.\n");

	do{
	
		printf("\nDigite a númeração da região que deseja conhecer:");
		scanf("%d", &numero);
		fflush(stdin);
	
		system("cls");
	
		if(numero == 1)
			printf("Sua opção foi a 1, região Norte!\n");
				else if(numero == 2)
					printf("Sua opção foi a 2, região Nordeste!\n");
						else if(numero == 3)
							printf("Sua opção foi a 3, região Centro-Oeste!\n");
								else if(numero == 4)
									printf("Sua opção foi a 4, região Sudeste!\n");
										else if(numero == 5)
											printf("Sua opção foi a 5, região Sul!\n");
												else if(numero==0)
													printf("Saindo do programa...\n");
														else
	 														printf("Número não encontrado, no programa.\n");
	
	}while(numero!=0);
	
    system("pause");
    return 0;
}
