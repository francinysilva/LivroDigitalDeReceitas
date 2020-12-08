
#include <stdio.h
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

void mostraListaRecursiva(int i){
	int nReceita;
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
			mostraReceita(nReceita);
			i++;
		}else{
			mostraListaRecursiva(0);
		
		}
	}
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

float mostraLucro(float n, int rend){
	float lucro;
	lucro = n/rend;
	return lucro;
}

void mostraReceita(int n){
	int  i = n - 1;;
	int vet_rend[5]={2,2,3,4,5};
	float vet_custo[5]={9.00,10.00,5.00,4.00,20.00};
	
	switch(n){
		case 1:
			printf("#####SUSPIRO MERENGUE#####\n\n2 claras de ovos\n40 gr de açúcar confeiteiro\n1 limão\n\nPasso a passo:\nBata as claras em neve junto com o açúcar, e aos poucos acrescente o suco de limão.\nEsse processo levará em torno de 6 a 8 minutos,\nlogo obterá um creme brilhoso e textura firme, que não escorra na vasilha.\nAqueça o forno a 140ºC e coloque o creme em um saco de confeiteiro com um bico comum.\nUnte uma forma com manteiga e coloque e comece a colocar alguns montinhos de merengue.\nLeve a assar no forno a 140ºC durante 15-20 minutos.");
			printf("\n\nRendimento: %d pessoas", vet_rend[i]);
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais", mostraLucro(calculaLucro(vet_custo[i]), vet_rend[i]));
			break;
		case 2:
			printf("#####MASSA CASEIRA FRESCA#####\n\n3 xícaras (chá) de farinha de trigo (cerca de 400 g)\n4 ovos\n3 colheres (chá) de sal\n\nPasso a passo:\nNuma tigela misture a farinha de trigo com o sal e abra um buraco no centro e adicione os ovos.\nCom um garfo, mexa apenas os ovos para misturar as gemas com as claras.\nAos poucos, misture os ovos com a farinha.  Assim que a farinha incorporar os ovos, misture e amasse com a mão até formar uma bolota.\nAmasse bem até ficar lisa. Embale a massa com filme e deixe descansar em temperatura ambiente por 30 minutos.\nApós o descaso, abra-a e deixa-a bem fina, pois estará pronta para cortar como desejar e ser cozida em água fervente. ");
			printf("\n\nRendimento: %d pessoas", vet_rend[i]);
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais", mostraLucro(calculaLucro(vet_custo[i]), vet_rend[i]));
			break;
		case 3:
			printf("#####MOLHO PESTO#####\n\n4 dentes de alho\n1 colher (chá) de sal\n1 xícara (chá) de folhas de manjericão\n3 colheres (chá) de nozes\n100 g de queijo parmesão ralado\n1/2 xícara (chá) de azeite\n\nPasso a passo:\nTriture o alho e as nozes no processador, acrescente o sal. Pique as folhas de manjericão e misture tudo numa tigela.\nAcrescente o queijo e o azeite na tigela e misture todos os ingredientes. ");
			printf("\n\nRendimento: %d pessoas", vet_rend[i]);
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais", mostraLucro(calculaLucro(vet_custo[i]), vet_rend[i]));
			break;
		case 4:
			printf("#####FAROFA DE PINHÃO#####\n\n1 kg de pinhão\n1 cebola picada\n1 pacote de farinha de mandioca\n½ xícara de azeite\n1 colher (chá) de sal\n1 colher (chá) de pimenta do reino\n\nPasso a passo:\nPegue o pinhão já cozido e descascado pique-o. Ligue o fogo baixo, pegue uma frigideira e coloque ½ de azeite, coloque a cebola picada e o sal.\nQuando a cebola reduzir a porção acrescente o pinhão picado e refogue.\nAcrescente a pimento do reino e vá acrescentando aos poucos a farinha de mandioca até chegar ao ponto de farofa refogada. ");
			printf("\n\nRendimento: %d pessoas", vet_rend[i]);
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais", mostraLucro(calculaLucro(vet_custo[i]), vet_rend[i]));
			break;
		case 5:
			printf("#####PEIXE ASSADO COM LIMAO E ALECRIM#####\n\n1 kg de peixe tilapia\n2 dentes de alho\n2 limões\nAzeite de oliva\nSal a gosto\n2 colheres (sopa) alecrim\nPapel alumínio\n\nPasso a passo:\nNuma assadeira com papel alumínio, coloque o peixe e azeite de oliva, pique o alho e coloque por cima do peixe e uma pitada de sal.\nDeixe assar por 15 minutos em temperatura 200C.\nRetire do forno o coloque o suco de 2 limões e as 2 colheres de alecrim e leve ao forno até começar a dourar o peixe.\nApós retire o excesso de alecrim e está pronto.");
			printf("\n\nRendimento: %d pessoas", vet_rend[i]);
			printf("\nCusto medio: %.2f reais", vet_custo[i]);
			printf("\nValor p/ venda com porcentagem de lucro dividido por quantidade de rendimento: %.2f reais", mostraLucro(calculaLucro(vet_custo[i]), vet_rend[i]));
			break;
	}
}
