/*4. Uma loja de móveis de informática está necessitando de um sistema que identifique quais móveis de
informática estão sendo solicitados pelos seus clientes. Os móveis disponibilizados por esta empresa são:
1-cadeira, 2-mesa de computador, 3-estante de livros, 4-mesa de impressora e 5-estante de CD. Quando
se tratar de um móvel que não exista na empresa informe ao cliente que ainda não está disponível.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int movel, cadeira=0, mesaComputador=0, estanteLivros=0, mesaImpressora=0, estanteCd=0;
	char solicitar;
	
	do{
		printf("Móveis Disponíveis:\n");
		printf("==================\n");
		printf("1-Cadeira.\n");
		printf("2-Mesa de computador.\n");
		printf("3-Estante de livros.\n");
		printf("4-Mesa de impressora.\n");
		printf("5-Estante de CD.\n");
			
		printf("Digite a numeração do móvel desejado:");
		scanf("%d", &movel);
		fflush(stdin);
		
		system("cls");
		
		if(movel==1){
			cadeira++;
			printf("O móvel escolhido foi a Cadeira.\n");
		}
		else if(movel==2){
			mesaComputador++;
			printf("O móvel escolhido foi a Mesa de computador.\n");
		}
		else if(movel==3){
			estanteLivros++;
			printf("O móvel escolhido foi a Estante de livros.\n");
		}
		else if(movel==4){
			mesaImpressora++;
			printf("O móvel escolhido foi a Mesa de impressora.\n");
		}
		else if(movel==5){
			estanteCd++;
			printf("O móvel escolhido foi a Estante de CD.\n");
		}
		else
			printf("Este móvel ainda não foi adicionado ao estoque.\n");
 
		printf("Deseja solicitar mais algum móvel, |S| - sim |N| - não:");
		scanf("%c", &solicitar);
		fflush(stdin);
		
		solicitar = toupper(solicitar);
	
		system("cls");
	
	}while(solicitar != 'N');
	
	system("cls");
	
	printf("Foram solicitados:\n");
	printf("%d Cadeira(s).\n", cadeira);
	printf("%d Mesa(s) de computador.\n", mesaComputador);
	printf("%d Estante(s) de livros.\n", estanteLivros);
	printf("%d Mesa(s) de impressora.\n", mesaImpressora);
	printf("%d Estante(s) de CD.\n", estanteCd);
	
	system("pause");
	return 0;
}
