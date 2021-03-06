#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fran.h"

void mostraLista(){
	printf("LISTA DE RECEITAS, DIGITE O NUMERO QUE DESEJA:\n\n");
	printf("1-SUSPIRO MERENGUE\n");
	printf("2-MASSA CASEIRA FRESCA\n");
	printf("3-MOLHO PESTO\n");
	printf("0-ENCERRA O PROGRAMA\n\n");
}

float mostraLucro(float n, int rend){
	float lucro;
	lucro = n/rend;
	return lucro;
}

float calculaLucro(float n){
	float res;
	float margemLucro=0.30;
	//printf("\nQual a porcentagem da sua margem de lucro? Digite em decimal Exemplo: 40% = 0.40");
	//scanf("%.2f", margemLucro);
	res = n*(1+margemLucro);
	return res;
}

char confirmaEscolha(int nReceita){
	char res;
	switch(nReceita){
		case 1:
			printf("#####SUSPIRO MERENGUE#####\n\nDescricao:\n");
			printf("Deseja visualizar esta receita?s/n\n");
			scanf(" %c", &res);
			return res;
			break;
		case 2:
			printf("#####MASSA CASEIRA FRESCA#####\n\nDescricao:\n");
			printf("Deseja visualizar esta receita?s/n\n");
			scanf(" %c", &res);
			return res;
			break;
		case 3:
			printf("#####MOLHO PESTO#####\n\nDescricao:\n");
			printf("Deseja visualizar esta receita?s/n\n");
			scanf(" %c", &res);
			return res;
			break;
		case 0:
			exit(0);
	}
}

char confirmaEscolhaRec(int nReceita){
	char res;
	switch(nReceita){
		case 1:
			printf("#####SUSPIRO MERENGUE#####\n\nDescricao:\n");
			printf("Deseja visualizar esta receita?s/n\n");
			scanf(" %c", &res);
			if(res == 's' || res == 'n'){
				return res;	
			}else{
				confirmaEscolhaRec(nReceita);
			}
			break;
		case 2:
			printf("#####MASSA CASEIRA FRESCA#####\n\nDescricao:\n");
			printf("Deseja visualizar esta receita?s/n\n");
			scanf(" %c", &res);
			if(res == 's' || res == 'n'){
				return res;	
			}else{
				confirmaEscolhaRec(nReceita);
			}
			break;
		case 3:
			printf("#####MOLHO PESTO#####\n\nDescricao:\n");
			printf("Deseja visualizar esta receita?s/n\n");
			scanf(" %c", &res);
			if(res == 's' || res == 'n'){
				return res;	
			}else{
				confirmaEscolhaRec(nReceita);
			}
			break;
		case 0:
			exit(0);
	}
}


void alteraRendimento(int n, char *str_rend, int *ptr_vet, int vRend, float vCusto){
	if(strcmp(str_rend,"metade")){
		quantPorRendimento(2,n,ptr_vet,vRend,vCusto);
	}else if(strcmp(str_rend,"dobro")){
		quantPorRendimento(1,n,ptr_vet,vRend,vCusto);
	}
}

void quantPorRendimento(int rend, int n, int *ptr_vet, int vRend, float vCusto){
	if(rend==1){
		switch(n){
		case 1:
			printf("\n%d claras de ovos\n%d g de acucar confeiteiro\n%d limao", *(ptr_vet+0)-1, *(ptr_vet+1)/2, *(ptr_vet+2));
			printf("\n\nRendimento: Rende %d unidades", vRend/2);
			printf("\nCusto medio: %.2f reais", vCusto/2);
			break;
		case 2:
			printf("\n%d xicaras (cha) de farinha de trigo (cerca de %d g)\n%d ovos\n%d colheres (cha) de sal", *(ptr_vet+0)-2, *(ptr_vet+1)/2, *(ptr_vet+2)/2, *(ptr_vet+3)-1);
			printf("\n\nRendimento: Rende %d unidades", vRend/2);
			printf("\nCusto medio: %.2f reais", vCusto/2);
			break;
		case 3:
			printf("\n%d dentes de alho\n%d colher (cha) de sal\n%d xicara (cha) de folhas de manjericao\n%d colheres (cha) de nozes\n%d g de queijo parmesao ralado\n%d xicara (cha) de azeite", *(ptr_vet+0)/2, *(ptr_vet+1), *(ptr_vet+2), *(ptr_vet+3), *(ptr_vet+4)/2, *(ptr_vet+5), *(ptr_vet+6)*2);
			printf("\n\nRendimento: Rende %d unidades", vRend/2);
			printf("\nCusto medio: %.2f reais", vCusto/2);
			break;
		}
	}
	else if(rend==2){
		switch(n){
		case 1:
			printf("\n%d claras de ovos\n%d g de acucar confeiteiro\n%d limao", *(ptr_vet+0)*2, *(ptr_vet+1)*2, *(ptr_vet+2)*2);
			printf("\n\nRendimento: Rende %d unidades", vRend*2);
			printf("\nCusto medio: %.2f reais", vCusto*2);
			break;
		case 2:
			printf("\n%d xicaras (cha) de farinha de trigo (cerca de %d g)\n%d ovos\n%d colheres (cha) de sal", *(ptr_vet+0)*2, *(ptr_vet+1)*2, *(ptr_vet+2)*2, *(ptr_vet+3)*2);
			printf("\n\nRendimento: Rende %d unidades", vRend*2);
			printf("\nCusto medio: %.2f reais", vCusto*2);
			break;
		case 3:
			printf("\n%d dentes de alho\n%d colher (cha) de sal\n%d xicara (cha) de folhas de manjericao\n%d colheres (cha) de nozes\n%d g de queijo parmesao ralado\n%d xicara (cha) de azeite", *(ptr_vet+0)*2, *(ptr_vet+1)*2, *(ptr_vet+2)*2, *(ptr_vet+3)*2, *(ptr_vet+4)*2, *(ptr_vet+5));
			printf("\n\nRendimento: Rende %d unidades", vRend*2);
			printf("\nCusto medio: %.2f reais", vCusto*2);
			break;
		}
	}
}

void mostraReceita(int n, int *ptr_vet, char *ptr_receita, char *ptr_passos){
	
	FILE *txt;
	txt = fopen("./Fran.txt", "w");
	if (txt == NULL)
	{
	   printf("Problemas na CRIACAO do arquivo\n");
	   return;
	}
	char str_rend[10];
	int  i = n - 1;
	int vet_rend[3]={8,4,1};
	float *vet_custo = custoDinamica(3);
	switch(n){
		case 1:
			printf("%s", ptr_receita);
			printf("\n\nIngredientes:\n\n");
			printf("%d claras de ovos\n%d g de acucar confeiteiro\n%d limao\n\n", *(ptr_vet+0), *(ptr_vet+1), *(ptr_vet+2));
			printf("%s", ptr_passos);
			fprintf(txt,"%s", ptr_receita);
			fprintf(txt,"%s", ptr_passos);
			printf("\n\nRendimento: Rende %d unidades", vet_rend[i]);
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais\n\n", mostraLucro(calculaLucro(vet_custo[i]), vet_rend[i]));
			printf("Digite metade ou dobro pra descobrir a qntde de ingredientes necessarios de acordo com a tua necessidade de rendimento:\n");
			scanf(" %s", str_rend);
			alteraRendimento(n, str_rend, ptr_vet, vet_rend[i], vet_custo[i]);
			break;
		case 2:
			printf("%s", ptr_receita);
			printf("\n\nIngredientes:\n\n");
			printf("%d xicaras (cha) de farinha de trigo (cerca de %d g)\n%d ovos\n%d colheres (cha) de sal", *(ptr_vet+0), *(ptr_vet+1), *(ptr_vet+2), *(ptr_vet+3));
			printf("%s", ptr_passos);
			fprintf(txt,"%s", ptr_receita);
			fprintf(txt,"%s", ptr_passos);
			printf("\n\nRendimento: Rende %d unidades", vet_rend[i]);
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais\n\n", mostraLucro(calculaLucro(vet_custo[i]), vet_rend[i]));
			printf("Digite metade ou dobro pra descobrir a qntde de ingredientes necessarios de acordo com a tua necessidade de rendimento:\n");
			scanf(" %s", str_rend);
			alteraRendimento(n, str_rend, ptr_vet, vet_rend[i], vet_custo[i]);
			break;
		case 3:
			printf("%s", ptr_receita);
			printf("\n\nIngredientes:\n\n");
			printf("%d dentes de alho\n%d colher (cha) de sal\n%d xicara (cha) de folhas de manjericao\n%d colheres (cha) de nozes\n%d g de queijo parmesao ralado\n%d/%d xicara (cha) de azeite", *(ptr_vet+0), *(ptr_vet+1), *(ptr_vet+2), *(ptr_vet+3), *(ptr_vet+4), *(ptr_vet+5), *(ptr_vet+6));
			printf("%s", ptr_passos);
			fprintf(txt,"%s", ptr_receita);
			fprintf(txt,"%s", ptr_passos);
			printf("\n\nRendimento: Rende %d unidades", vet_rend[i]);
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais\n\n", mostraLucro(calculaLucro(vet_custo[i]), vet_rend[i]));
			printf("Digite metade ou dobro pra descobrir a qntde de ingredientes necessarios de acordo com a tua necessidade de rendimento:\n");
			scanf(" %s", str_rend);
			alteraRendimento(n, str_rend, ptr_vet, vet_rend[i], vet_custo[i]);
			break;
	}
	fclose(txt);
}

float *custoDinamica(int n){
	float *vet;
	vet = (float *)malloc( 3 * sizeof(float) );
	if(vet == NULL){
		printf("ERRO\n");
		return NULL;
	}
	
	*(vet + 0) =  9.00;
	*(vet + 1) =  7.00;
	*(vet + 2) =  5.00;
	
	return vet;
}
