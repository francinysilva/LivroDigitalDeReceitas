#include <stdio.h>
#include <stdlib.h>
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

float calculaLucro(float n){
	return n*1.3;
}

char confirmaEscolha(nReceita){
	
	char res;
	
	switch(nReceita){
		case 1:
			printf("#####SUSPIRO MERENGUE#####\n\nDescricao:\n");
			printf("Deseja visualizar esta receita?s/n\n");
			scanf(" %c\n\n", &res);
			return res;
			break;
		case 2:
			printf("#####MASSA CASEIRA FRESCA#####\n\nDescricao:\n");
			printf("Deseja visualizar esta receita?s/n\n");
			scanf(" %c\n\n", &res);
			return res;
			break;
		case 3:
			printf("#####MOLHO PESTO#####\n\nDescricao:\n");
			printf("Deseja visualizar esta receita?s/n\n");
			scanf(" %c\n\n", &res);
			return res;
			break;
		case 4:
			printf("#####FAROFA DE PINHAO#####\n\nDescricao:\n");
			printf("Deseja visualizar esta receita?s/n\n");
			scanf(" %c\n\n", &res);
			return res;
			break;
		case 5:
			printf("#####PEIXE ASSADO COM LIMAO E ALECRIM#####\n\nDescricao:\n");
			printf("Deseja visualizar esta receita?s/n\n");
			scanf(" %c\n\n", &res);
			return res;
			break;
		case 0:
			exit(0);
	}
}

int mostraRend(int n, int *ptr_vet){
	int rend = *(ptr_vet+n);
	return rend;
}

float mostraLucro(float n, int *ptr_vet, int i){
	float lucro;
	int r;
	r = *(ptr_vet+i);
	lucro = calculaLucro(n);
	lucro = lucro/r;
	return lucro;
}

void mostraReceita(int n){
	int *ptr_vet, i = n - 1;;
	int vet_rend[5]={2,2,3,4,5};
	ptr_vet = vet_rend;
	float vet_custo[5]={9.00,10.00,5.00,4.00,20.00};
	
	switch(n){
		case 1:
			printf("#####SUSPIRO MERENGUE#####\n\n2 claras de ovos\n40 gr de a��car confeiteiro\n1 lim�o\n\nPasso a passo:\nBata as claras em neve junto com o a��car, e aos poucos acrescente o suco de lim�o.\nEsse processo levar� em torno de 6 a 8 minutos,\nlogo obter� um creme brilhoso e textura firme, que n�o escorra na vasilha.\nAque�a o forno a 140�C e coloque o creme em um saco de confeiteiro com um bico comum.\nUnte uma forma com manteiga e coloque e comece a colocar alguns montinhos de merengue.\nLeve a assar no forno a 140�C durante 15-20 minutos.");
			printf("\n\nRendimento: %d pessoas", mostraRend(i, ptr_vet)); 
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais", mostraLucro(vet_custo[i], ptr_vet, i));
			break;
		case 2:
			printf("#####MASSA CASEIRA FRESCA#####\n\n3 x�caras (ch�) de farinha de trigo (cerca de 400 g)\n4 ovos\n3 colheres (ch�) de sal\n\nPasso a passo:\nNuma tigela misture a farinha de trigo com o sal e abra um buraco no centro e adicione os ovos.\nCom um garfo, mexa apenas os ovos para misturar as gemas com as claras.\nAos poucos, misture os ovos com a farinha.  Assim que a farinha incorporar os ovos, misture e amasse com a m�o at� formar uma bolota.\nAmasse bem at� ficar lisa. Embale a massa com filme e deixe descansar em temperatura ambiente por 30 minutos.\nAp�s o descaso, abra-a e deixa-a bem fina, pois estar� pronta para cortar como desejar e ser cozida em �gua fervente. ");
			printf("\n\nRendimento: %d pessoas", mostraRend(i, ptr_vet));
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais", mostraLucro(vet_custo[i], ptr_vet, i));
			break;
		case 3:
			printf("#####MOLHO PESTO#####\n\n4 dentes de alho\n1 colher (ch�) de sal\n1 x�cara (ch�) de folhas de manjeric�o\n3 colheres (ch�) de nozes\n100 g de queijo parmes�o ralado\n1/2 x�cara (ch�) de azeite\n\nPasso a passo:\nTriture o alho e as nozes no processador, acrescente o sal. Pique as folhas de manjeric�o e misture tudo numa tigela.\nAcrescente o queijo e o azeite na tigela e misture todos os ingredientes. ");
			printf("\n\nRendimento: %d pessoas", mostraRend(i, ptr_vet));
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais", mostraLucro(vet_custo[i], ptr_vet, i));
			break;
		case 4:
			printf("#####FAROFA DE PINH�O#####\n\n1 kg de pinh�o\n1 cebola picada\n1 pacote de farinha de mandioca\n� x�cara de azeite\n1 colher (ch�) de sal\n1 colher (ch�) de pimenta do reino\n\nPasso a passo:\nPegue o pinh�o j� cozido e descascado pique-o. Ligue o fogo baixo, pegue uma frigideira e coloque � de azeite, coloque a cebola picada e o sal.\nQuando a cebola reduzir a por��o acrescente o pinh�o picado e refogue.\nAcrescente a pimento do reino e v� acrescentando aos poucos a farinha de mandioca at� chegar ao ponto de farofa refogada. ");
			printf("\n\nRendimento: %d pessoas", mostraRend(i, ptr_vet));
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais", mostraLucro(vet_custo[i], ptr_vet, i));
			break;
		case 5:
			printf("#####PEIXE ASSADO COM LIMAO E ALECRIM#####\n\n1 kg de peixe tilapia\n2 dentes de alho\n2 lim�es\nAzeite de oliva\nSal a gosto\n2 colheres (sopa) alecrim\nPapel alum�nio\n\nPasso a passo:\nNuma assadeira com papel alum�nio, coloque o peixe e azeite de oliva, pique o alho e coloque por cima do peixe e uma pitada de sal.\nDeixe assar por 15 minutos em temperatura 200C.\nRetire do forno o coloque o suco de 2 lim�es e as 2 colheres de alecrim e leve ao forno at� come�ar a dourar o peixe.\nAp�s retire o excesso de alecrim e est� pronto.");
			printf("\n\nRendimento: %d pessoas", mostraRend(i, ptr_vet));
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais", mostraLucro(vet_custo[i], ptr_vet, i));
			break;
	}
}
