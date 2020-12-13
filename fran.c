#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fran.h"

void mostraLista(void){
	printf("LISTA DE RECEITAS, DIGITE O NUMERO QUE DESEJA:\n\n");
	printf("1-SUSPIRO MERENGUE\n");
	printf("2-MASSA CASEIRA FRESCA\n");
	printf("3-MOLHO PESTO\n");
	printf("4-FAROFA DE PINHAO\n");
	printf("5-PEIXE ASSADO COM LIMAO E ALECRIM\n");
	printf("0-ENCERRA O PROGRAMA\n\n");
}

void mostraListaRecursiva(int i){

	int nReceita;
	int vetSuspiro[9] = {2,40,1,6,8,140,140,15,20};
	int vetMassaCaseira[5] = {3,400,4,3,30};
	int vetPesto[7] = {4,1,1,3,100,1,2};
	int vetFarofaPinhao[9] = {1,1,1,1,2,1,1,1,2};
	int vetPeixeAssado[8] = {1,2,2,2,15,200,2,2};
	
	printf("LISTA DE RECEITAS, DIGITE O NUMERO QUE DESEJA:\n\n");
	printf("1-SUSPIRO MERENGUE\n");
	printf("2-MASSA CASEIRA FRESCA\n");
	printf("3-MOLHO PESTO\n");
	printf("4-FAROFA DE PINHAO\n");
	printf("5-PEIXE ASSADO COM LIMAO E ALECRIM\n");
	printf("0-ENCERRA O PROGRAMA\n\n");
	
	if(i==0){
		scanf("%d", &nReceita);
		if(confirmaEscolha(nReceita)=='s'){
			switch(nReceita){
				case 1:
					mostraReceita(nReceita, vetSuspiro);
					break;
				case 2:
					mostraReceita(nReceita, vetMassaCaseira);
					break;
				case 3:
					mostraReceita(nReceita, vetPesto);
					break;
				case 4:
					mostraReceita(nReceita, vetFarofaPinhao);
					break;
				case 5:
					mostraReceita(nReceita, vetPeixeAssado);
					break;
			}
			i++;
		}else{
			system("cls");
			mostraListaRecursiva(0);
		
		}
	}
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

char confirmaEscolha(nReceita){
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
		case 4:
			printf("#####FAROFA DE PINHAO#####\n\nDescricao:\n");
			printf("Deseja visualizar esta receita?s/n\n");
			scanf(" %c", &res);
			return res;
			break;
		case 5:
			printf("#####PEIXE ASSADO COM LIMAO E ALECRIM#####\n\nDescricao:\n");
			printf("Deseja visualizar esta receita?s/n\n");
			scanf(" %c", &res);
			return res;
			break;
		case 0:
			exit(0);
	}
}

void alteraRendimento(int n, char *str_rend, int *ptr_vet){
	if(strcmp(str_rend,"metade")){
		quantPorRendimento(1,n,ptr_vet);
	}else if(strcmp(str_rend,"dobro")){
		quantPorRendimento(2,n,ptr_vet);
	}else if(strcmp(str_rend,"quadruplo")){
		quantPorRendimento(3,n,ptr_vet);
	}else{
		exit(0);
	}
}

void quantPorRendimento(int rend, int n, int *ptr_vet){
	if(rend==1){
		switch(n){
		case 1:
			printf("#####SUSPIRO MERENGUE#####\n\n%d claras de ovos\n%d g de acucar confeiteiro\n%d/2 limao\n\nPasso a passo:\nBata as claras em neve junto com o acucar, e aos poucos acrescente o suco de limao.\nEsse processo levarah em torno de %d a %d minutos,\nlogo obterah um creme brilhoso e textura firme, que nao escorra na vasilha. \nAqueca o forno a %dC e coloque o creme em um saco de confeiteiro com um bico comum.\nUnte uma forma com manteiga e coloque e comece a colocar alguns montinhos de merengue.\nLeve a assar no forno a %dC durante %d ou %d minutos.", *(ptr_vet+0)-1, *(ptr_vet+1)/2, *(ptr_vet+2), *(ptr_vet+3)/2, *(ptr_vet+4)/2, *(ptr_vet+5), *(ptr_vet+6), *(ptr_vet+7)-7, *(ptr_vet+8)/2);
			break;
		case 2:
			printf("#####MASSA CASEIRA FRESCA#####\n\n%d/2 xicaras (cha) de farinha de trigo (cerca de %d g)\n%d ovos\n%d/2 colheres (cha) de sal\n\nPasso a passo:\nNuma tigela misture a farinha de trigo com o sal e abra um buraco no centro e adicione os ovos.\nCom um garfo, mexa apenas os ovos para misturar as gemas com as claras.\nAos poucos, misture os ovos com a farinha.  Assim que a farinha incorporar os ovos, misture e amasse com a mao até formar uma bolota.\nAmasse bem ateh ficar lisa. Embale a massa com filme e deixe descansar em temperatura ambiente por %d minutos.\nApos o descaso, abra-a e deixa-a bem fina, pois estarah pronta para cortar como desejar e ser cozida em agua fervente.", *(ptr_vet+0)-2, *(ptr_vet+1)/2, *(ptr_vet+2)/2, *(ptr_vet+3), *(ptr_vet+4)/2);
			break;
		case 3:
			printf("#####MOLHO PESTO#####\n\n%d dentes de alho\n%d/2 colher (cha) de sal\n%d/2 xicara (cha) de folhas de manjericao\n%d/2 colheres (cha) de nozes\n%d g de queijo parmesao ralado\n%d/%d xicara (cha) de azeite\n\nPasso a passo:\nTriture o alho e as nozes no processador, acrescente o sal. Pique as folhas de manjericao e misture tudo numa tigela. \nAcrescente o queijo e o azeite na tigela e misture todos os ingredientes.", *(ptr_vet+0)/2, *(ptr_vet+1), *(ptr_vet+2), *(ptr_vet+3), *(ptr_vet+4)/2, *(ptr_vet+5), *(ptr_vet+6)*2);
			break;
		case 4:
			printf("#####FAROFA DE PINHAO#####\n\n%d/2 kg de pinhao\n%d/2 cebola picada\n%d/2 pacote de farinha de mandioca\n %d/%d xicara de azeite\n%d/2 colher (cha) de sal\n%d/2 colher (cha) de pimenta do reino\n\nPasso a passo:\nPegue o pinhao ja cozido e descascado pique-o. Ligue o fogo baixo, pegue uma frigideira e coloque %d/%d de azeite, coloque a cebola picada e o sal.\nQuando a cebola reduzir a porçao acrescente o pinhao picado e refogue.\nAcrescente a pimento do reino e vah acrescentando aos poucos a farinha de mandioca ateh chegar ao ponto de farofa refogada.", *(ptr_vet+0), *(ptr_vet+1), *(ptr_vet+2), *(ptr_vet+3), *(ptr_vet+4)*2, *(ptr_vet+5), *(ptr_vet+6), *(ptr_vet+7), *(ptr_vet+8)*2);
			break;
		case 5:
			printf("#####PEIXE ASSADO COM LIMAO E ALECRIM#####\n\n%d/2 kg de peixe tilapia\n%d dentes de alho\n%d limoes\nAzeite de oliva\nSal a gosto\n%d colheres (sopa) alecrim\nPapel aluminio\n\nPasso a passo:\nNuma assadeira com papel aluminio, coloque o peixe e azeite de oliva, pique o alho e coloque por cima do peixe e uma pitada de sal.\nDeixe assar por %d minutos em temperatura %dC.\nRetire do forno o coloque o suco de %d limoes e as %d colheres de alecrim e leve ao forno ate começar a dourar o peixe.\nApos retire o excesso de alecrim e estah pronto.", *(ptr_vet+0), *(ptr_vet+1)/2, *(ptr_vet+2)/2, *(ptr_vet+3)/2, *(ptr_vet+4)-7, *(ptr_vet+5), *(ptr_vet+6)/2, *(ptr_vet+7)/2);
			break;
		}
	}else if(rend==2){
		switch(n){
		case 1:
			printf("#####SUSPIRO MERENGUE#####\n\n%d claras de ovos\n%d g de acucar confeiteiro\n%d limao\n\nPasso a passo:\nBata as claras em neve junto com o acucar, e aos poucos acrescente o suco de limao.\nEsse processo levarah em torno de %d a %d minutos,\nlogo obterah um creme brilhoso e textura firme, que nao escorra na vasilha. \nAqueca o forno a %dC e coloque o creme em um saco de confeiteiro com um bico comum.\nUnte uma forma com manteiga e coloque e comece a colocar alguns montinhos de merengue.\nLeve a assar no forno a %dC durante %d ou %d minutos.", *(ptr_vet+0)*2, *(ptr_vet+1*2), *(ptr_vet+2)*2, *(ptr_vet+3)+4, *(ptr_vet+4)+4, *(ptr_vet+5), *(ptr_vet+6), *(ptr_vet+7)+5, *(ptr_vet+8)+5);
			break;
		case 2:
			printf("#####MASSA CASEIRA FRESCA#####\n\n%d xicaras (cha) de farinha de trigo (cerca de %d g)\n%d ovos\n%d colheres (cha) de sal\n\nPasso a passo:\nNuma tigela misture a farinha de trigo com o sal e abra um buraco no centro e adicione os ovos.\nCom um garfo, mexa apenas os ovos para misturar as gemas com as claras.\nAos poucos, misture os ovos com a farinha.  Assim que a farinha incorporar os ovos, misture e amasse com a mao até formar uma bolota.\nAmasse bem ateh ficar lisa. Embale a massa com filme e deixe descansar em temperatura ambiente por %d minutos.\nApos o descaso, abra-a e deixa-a bem fina, pois estarah pronta para cortar como desejar e ser cozida em agua fervente.", *(ptr_vet+0)*2, *(ptr_vet+1)*2, *(ptr_vet+2)*2, *(ptr_vet+3)*2, *(ptr_vet+4)*2);
			break;
		case 3:
			printf("#####MOLHO PESTO#####\n\n%d dentes de alho\n%d colher (cha) de sal\n%d xicara (cha) de folhas de manjericao\n%d colheres (cha) de nozes\n%d g de queijo parmesao ralado\n%d xicara (cha) de azeite\n\nPasso a passo:\nTriture o alho e as nozes no processador, acrescente o sal. Pique as folhas de manjericao e misture tudo numa tigela. \nAcrescente o queijo e o azeite na tigela e misture todos os ingredientes.", *(ptr_vet+0)*2, *(ptr_vet+1)*2, *(ptr_vet+2)*2, *(ptr_vet+3)*2, *(ptr_vet+4)*2, *(ptr_vet+5));
			break;
		case 4:
			printf("#####FAROFA DE PINHAO#####\n\n%d kg de pinhao\n%d cebola picada\n%d pacote de farinha de mandioca\n %d xicara de azeite\n%d colher (cha) de sal\n%d colher (cha) de pimenta do reino\n\nPasso a passo:\nPegue o pinhao ja cozido e descascado pique-o. Ligue o fogo baixo, pegue uma frigideira e coloque %d de azeite, coloque a cebola picada e o sal.\nQuando a cebola reduzir a porçao acrescente o pinhao picado e refogue.\nAcrescente a pimento do reino e vah acrescentando aos poucos a farinha de mandioca ateh chegar ao ponto de farofa refogada.", *(ptr_vet+0)*2, *(ptr_vet+1)*2, *(ptr_vet+2)*2, *(ptr_vet+3), *(ptr_vet+5)*2, *(ptr_vet+6)*2, *(ptr_vet+7)*2);
			break;
		case 5:
			printf("#####PEIXE ASSADO COM LIMAO E ALECRIM#####\n\n%d kg de peixe tilapia\n%d dentes de alho\n%d limoes\nAzeite de oliva\nSal a gosto\n%d colheres (sopa) alecrim\nPapel aluminio\n\nPasso a passo:\nNuma assadeira com papel aluminio, coloque o peixe e azeite de oliva, pique o alho e coloque por cima do peixe e uma pitada de sal.\nDeixe assar por %d minutos em temperatura %dC.\nRetire do forno o coloque o suco de %d limoes e as %d colheres de alecrim e leve ao forno ate começar a dourar o peixe.\nApos retire o excesso de alecrim e estah pronto.", *(ptr_vet+0)*2, *(ptr_vet+1)*2, *(ptr_vet+2)*2, *(ptr_vet+3), *(ptr_vet+4)+5, *(ptr_vet+5), *(ptr_vet+6)*2, *(ptr_vet+7)*2);
			break;
		}
	}else if(rend==3){
		switch(n){
		case 1:
			printf("#####SUSPIRO MERENGUE#####\n\n%d claras de ovos\n%d g de acucar confeiteiro\n%d limao\n\nPasso a passo:\nBata as claras em neve junto com o acucar, e aos poucos acrescente o suco de limao.\nEsse processo levarah em torno de %d a %d minutos,\nlogo obterah um creme brilhoso e textura firme, que nao escorra na vasilha. \nAqueca o forno a %dC e coloque o creme em um saco de confeiteiro com um bico comum.\nUnte uma forma com manteiga e coloque e comece a colocar alguns montinhos de merengue.\nLeve a assar no forno a %dC durante %d ou %d minutos.", *(ptr_vet+0)*4, *(ptr_vet+1)*4, *(ptr_vet+2)*4, *(ptr_vet+3)*3, *(ptr_vet+4)*3, *(ptr_vet+5), *(ptr_vet+6), *(ptr_vet+7)+10, *(ptr_vet+8)+10);
			break;
		case 2:
			printf("#####MASSA CASEIRA FRESCA#####\n\n%d xicaras (cha) de farinha de trigo (cerca de %d g)\n%d ovos\n%d colheres (cha) de sal\n\nPasso a passo:\nNuma tigela misture a farinha de trigo com o sal e abra um buraco no centro e adicione os ovos.\nCom um garfo, mexa apenas os ovos para misturar as gemas com as claras.\nAos poucos, misture os ovos com a farinha.  Assim que a farinha incorporar os ovos, misture e amasse com a mao até formar uma bolota.\nAmasse bem ateh ficar lisa. Embale a massa com filme e deixe descansar em temperatura ambiente por %d minutos.\nApos o descaso, abra-a e deixa-a bem fina, pois estarah pronta para cortar como desejar e ser cozida em agua fervente.", *(ptr_vet+0)*4, *(ptr_vet+1)*4, *(ptr_vet+2)*4, *(ptr_vet+3)*4, *(ptr_vet+4)*4);
			break;
		case 3:
			printf("#####MOLHO PESTO#####\n\n%d dentes de alho\n%d colher (cha) de sal\n%d xicara (cha) de folhas de manjericao\n%d colheres (cha) de nozes\n%d g de queijo parmesao ralado\n%d xicara (cha) de azeite\n\nPasso a passo:\nTriture o alho e as nozes no processador, acrescente o sal. Pique as folhas de manjericao e misture tudo numa tigela. \nAcrescente o queijo e o azeite na tigela e misture todos os ingredientes.", *(ptr_vet+0)*4, *(ptr_vet+1)*4, *(ptr_vet+2)*4, *(ptr_vet+3)*4, *(ptr_vet+4)*4, *(ptr_vet+5)*2);
			break;
		case 4:
			printf("#####FAROFA DE PINHAO#####\n\n%d kg de pinhao\n%d cebola picada\n%d pacote de farinha de mandioca\n %d xicara de azeite\n%d colher (cha) de sal\n%d colher (cha) de pimenta do reino\n\nPasso a passo:\nPegue o pinhao ja cozido e descascado pique-o. Ligue o fogo baixo, pegue uma frigideira e coloque %d de azeite, coloque a cebola picada e o sal.\nQuando a cebola reduzir a porçao acrescente o pinhao picado e refogue.\nAcrescente a pimento do reino e vah acrescentando aos poucos a farinha de mandioca ateh chegar ao ponto de farofa refogada.", *(ptr_vet+0)*4, *(ptr_vet+1)*4, *(ptr_vet+2)*4, *(ptr_vet+3)*2, *(ptr_vet+5)*4, *(ptr_vet+6)*4, *(ptr_vet+7)+1);
			break;
		case 5:
			printf("#####PEIXE ASSADO COM LIMAO E ALECRIM#####\n\n%d kg de peixe tilapia\n%d dentes de alho\n%d limoes\nAzeite de oliva\nSal a gosto\n%d colheres (sopa) alecrim\nPapel aluminio\n\nPasso a passo:\nNuma assadeira com papel aluminio, coloque o peixe e azeite de oliva, pique o alho e coloque por cima do peixe e uma pitada de sal.\nDeixe assar por %d minutos em temperatura %dC.\nRetire do forno o coloque o suco de %d limoes e as %d colheres de alecrim e leve ao forno ate começar a dourar o peixe.\nApos retire o excesso de alecrim e estah pronto.", *(ptr_vet+0)*4, *(ptr_vet+1)*2, *(ptr_vet+2)*4, *(ptr_vet+3)*2, *(ptr_vet+4)+10, *(ptr_vet+5), *(ptr_vet+6)*4, *(ptr_vet+7)*4);
			break;
		}
	}
}

void mostraReceita(int n, int *ptr_vet){
	char str_rend[10];
	int  i = n - 1;
	int vet_rend[5]={8,4,1,4,4};
	float vet_custo[5]={9.00,7.00,5.00,4.00,20.00};
	switch(n){
		case 1:
			printf("#####SUSPIRO MERENGUE#####\n\n%d claras de ovos\n%d g de acucar confeiteiro\n%d limao\n\nPasso a passo:\nBata as claras em neve junto com o acucar, e aos poucos acrescente o suco de limao.\nEsse processo levarah em torno de %d a %d minutos,\nlogo obterah um creme brilhoso e textura firme, que nao escorra na vasilha. \nAqueca o forno a %dC e coloque o creme em um saco de confeiteiro com um bico comum.\nUnte uma forma com manteiga e coloque e comece a colocar alguns montinhos de merengue.\nLeve a assar no forno a %dC durante %d ou %d minutos.", *(ptr_vet+0), *(ptr_vet+1), *(ptr_vet+2), *(ptr_vet+3), *(ptr_vet+4), *(ptr_vet+5), *(ptr_vet+6), *(ptr_vet+7), *(ptr_vet+8));
			printf("\n\nRendimento: Rende %d unidades", vet_rend[i]);
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais\n\n", mostraLucro(calculaLucro(vet_custo[i]), vet_rend[i]));
			
			printf("Quer mudar o rendimento? Digite: metade, dobro, quadruplo ou sair\n");
			scanf(" %s", str_rend);
			alteraRendimento(n, str_rend,ptr_vet);
			
			break;
		case 2:
			printf("#####MASSA CASEIRA FRESCA#####\n\n%d xicaras (cha) de farinha de trigo (cerca de %d g)\n%d ovos\n%d colheres (cha) de sal\n\nPasso a passo:\nNuma tigela misture a farinha de trigo com o sal e abra um buraco no centro e adicione os ovos.\nCom um garfo, mexa apenas os ovos para misturar as gemas com as claras.\nAos poucos, misture os ovos com a farinha.  Assim que a farinha incorporar os ovos, misture e amasse com a mao até formar uma bolota.\nAmasse bem ateh ficar lisa. Embale a massa com filme e deixe descansar em temperatura ambiente por %d minutos.\nApos o descaso, abra-a e deixa-a bem fina, pois estarah pronta para cortar como desejar e ser cozida em agua fervente.", *(ptr_vet+0), *(ptr_vet+1), *(ptr_vet+2), *(ptr_vet+3), *(ptr_vet+4));
			printf("\n\nRendimento: Para %d pessoas", vet_rend[i]);
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais\n\n", mostraLucro(calculaLucro(vet_custo[i]), vet_rend[i]));
			
			printf("Quer mudar o rendimento? Digite: metade, dobro, quadruplo ou sair\n");
			scanf(" %s", str_rend);
			alteraRendimento(n, str_rend,ptr_vet);
			
			break;
		case 3:
			printf("#####MOLHO PESTO#####\n\n%d dentes de alho\n%d colher (cha) de sal\n%d xicara (cha) de folhas de manjericao\n%d colheres (cha) de nozes\n%d g de queijo parmesao ralado\n%d/%d xicara (cha) de azeite\n\nPasso a passo:\nTriture o alho e as nozes no processador, acrescente o sal. Pique as folhas de manjericao e misture tudo numa tigela. \nAcrescente o queijo e o azeite na tigela e misture todos os ingredientes.", *(ptr_vet+0), *(ptr_vet+1), *(ptr_vet+2), *(ptr_vet+3), *(ptr_vet+4), *(ptr_vet+5), *(ptr_vet+6));
			printf("\n\nRendimento: Para %d kg de massa", vet_rend[i]);
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais\n\n", mostraLucro(calculaLucro(vet_custo[i]), vet_rend[i]));
			
			printf("Quer mudar o rendimento? Digite: metade, dobro, quadruplo ou sair\n");
			scanf(" %s", str_rend);
			alteraRendimento(n, str_rend,ptr_vet);
			
			break;
		case 4:
			printf("#####FAROFA DE PINHAO#####\n\n%d kg de pinhao\n%d cebola picada\n%d pacote de farinha de mandioca\n %d/%d xicara de azeite\n%d colher (cha) de sal\n%d colher (cha) de pimenta do reino\n\nPasso a passo:\nPegue o pinhao ja cozido e descascado pique-o. Ligue o fogo baixo, pegue uma frigideira e coloque %d/%d de azeite, coloque a cebola picada e o sal.\nQuando a cebola reduzir a porçao acrescente o pinhao picado e refogue.\nAcrescente a pimento do reino e vah acrescentando aos poucos a farinha de mandioca ateh chegar ao ponto de farofa refogada.", *(ptr_vet+0), *(ptr_vet+1), *(ptr_vet+2), *(ptr_vet+3), *(ptr_vet+4), *(ptr_vet+5), *(ptr_vet+6), *(ptr_vet+7), *(ptr_vet+8));
			printf("\n\nRendimento: Para %d pessoas", vet_rend[i]);
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais\n\n", mostraLucro(calculaLucro(vet_custo[i]), vet_rend[i]));
			
			printf("Quer mudar o rendimento? Digite: metade, dobro, quadruplo ou sair\n");
			scanf(" %s", str_rend);
			alteraRendimento(n, str_rend,ptr_vet);
			
			break;
		case 5:
			printf("#####PEIXE ASSADO COM LIMAO E ALECRIM#####\n\n%d kg de peixe tilapia\n%d dentes de alho\n%d limoes\nAzeite de oliva\nSal a gosto\n%d colheres (sopa) alecrim\nPapel aluminio\n\nPasso a passo:\nNuma assadeira com papel aluminio, coloque o peixe e azeite de oliva, pique o alho e coloque por cima do peixe e uma pitada de sal.\nDeixe assar por %d minutos em temperatura %dC.\nRetire do forno o coloque o suco de %d limoes e as %d colheres de alecrim e leve ao forno ate começar a dourar o peixe.\nApos retire o excesso de alecrim e estah pronto.", *(ptr_vet+0), *(ptr_vet+1), *(ptr_vet+2), *(ptr_vet+3), *(ptr_vet+4), *(ptr_vet+5), *(ptr_vet+6), *(ptr_vet+7));
			printf("\n\nRendimento: Para %d pessoas", vet_rend[i]);
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais\n\n", mostraLucro(calculaLucro(vet_custo[i]), vet_rend[i]));
			
			printf("Quer mudar o rendimento? Digite: metade, dobro, quadruplo ou sair\n");
			scanf(" %s", str_rend);
			alteraRendimento(n, str_rend,ptr_vet);
			
			break;
	}
}
