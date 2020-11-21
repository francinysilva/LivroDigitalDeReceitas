#include <stdio.h>
#include <stdlib.h>
#include "lib.h"


int main(){
	
	int i=0,nReceita;
	
	while(i==0){	
		mostraLista();
		scanf("%d", &nReceita);
		if(confirmaEscolha(nReceita)=='s'){
			mostraReceita(nReceita);
			i++;
		}
	}
	
	return 0;
}
