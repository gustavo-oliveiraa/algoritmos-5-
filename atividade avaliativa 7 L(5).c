/*7. Faça um programa que leia três valores numéricos e os mostre em ordem crescente.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador, auxiliar, troca, tresNumeros[3]; 
	
	
	for(contador=0; contador<3; contador++){
		printf("Digite o número %d:", contador+1);
		scanf("%d", &tresNumeros[contador]);
		fflush(stdin);
	}
	
	for(auxiliar = 0; auxiliar < 3; auxiliar++){
		for(contador = auxiliar + 1; contador < 3; contador++){
			if(tresNumeros[auxiliar] > tresNumeros[contador]){
				troca = tresNumeros[contador];
				tresNumeros[contador] = tresNumeros[auxiliar];
				tresNumeros[auxiliar] = troca;
			}
		}
	}
	
	printf("Os números em ordem crescente:|%d| |%d| |%d|.\n", tresNumeros[0], tresNumeros[1], tresNumeros[2]);
	
	system("pause");
    return 0;
}
