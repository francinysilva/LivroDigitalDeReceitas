#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

int main(){
	
	char listaReceitas[3][30]={
		"###SUSPIRO MERENGUE###\n",
		"###MASSA CASEIRA FRESCA###\n",
		"###MOLHO PESTO###\n"
	};
	char passos[3][550]={
		"\nBata as claras em neve junto com o acucar, e aos poucos acrescente o suco de limao.\nEsse processo levarah em torno de 6 a 8 minutos, logo obterah um creme brilhoso e textura firme, que nao escorra na vasilha.\nAqueca o forno a 140C e coloque o creme em um saco de confeiteiro com um bico comum.\nUnte uma forma com manteiga e coloque e comece a colocar alguns montinhos de merengue.\nLeve a assar no forno a 140C durante 15 ou 20 minutos.",
		"\nNuma tigela misture a farinha de trigo com o sal e abra um buraco no centro e adicione os ovos.\nCom um garfo, mexa apenas os ovos para misturar as gemas com as claras.\nAos poucos, misture os ovos com a farinha.  Assim que a farinha incorporar os ovos, misture e amasse com a mao ateh formar uma bolota.\nAmasse bem ateh ficar lisa. Embale a massa com filme e deixe descansar em temperatura ambiente por 30 minutos.\nApos o descaso, abra-a e deixa-a bem fina, pois estarah pronta para cortar como desejar e ser cozida em agua fervente.",
		"\nTriture o alho e as nozes no processador, acrescente o sal.\nPique as folhas de manjericao e misture tudo numa tigela.\nAcrescente o queijo e o azeite na tigela e misture todos os ingredientes."
	};
	int i=0,nReceita;
	int vetSuspiro[3] = {2,40,1};
	int vetMassaCaseira[4] = {3,400,4,3};
	int vetPesto[7] = {4,1,1,3,100,1,2};
	
	while(i==0){	
		mostraLista();
		scanf("%d", &nReceita);
		if(confirmaEscolhaRec(nReceita)=='s'){
			switch(nReceita){
				case 1:
					mostraReceita(nReceita, vetSuspiro, listaReceitas[0], passos[0]);
					break;
				case 2:
					mostraReceita(nReceita, vetMassaCaseira, listaReceitas[1], passos[1]);
					break;
				case 3:
					mostraReceita(nReceita, vetPesto, listaReceitas[2], passos[2]);
					break;
			}
			i++;
		}
	}
	return 0;
}
