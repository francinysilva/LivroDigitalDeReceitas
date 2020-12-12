#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

void mostraLista (void);
void mostraListaRecursiva(int i);
char confirmaEscolha (int n);
void mostraReceita(int n, int *ptr_vet);
float mostraLucro(float n, int rend);
float calculaLucro(float n);
void alteraRendimento(int n, char *str_rend, int *ptr_vet);
void quantPorRendimento(int rend, int n, int *ptr_quant);

#endif 
