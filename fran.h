#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

void mostraLista(void); //mostra a lista de receitas disponíveis e se repete até ter uma opção escolhida e confirmada
char confirmaEscolha (int nReceita); //pergunta ao usuário se ele realmente quer ver aquela receita ou quer escolher outra
void mostraReceita(int n, int *ptr_vet, char *ptr_receita, char *ptr_passos);//recebe o código da receita escolhida e também o ponteiro vetor com a quantidade dos ingredientes da receita escolhida
float mostraLucro(float n, int rend);//faz o cálculo do valor de custo sobre o rendimento da receita
float calculaLucro(float n);//coloca a porcentagem de lucro no valor base de custo da receita
void alteraRendimento(int n, char *str_rend, int *ptr_vet, int vRend, float vCusto);//compara a leitura de string do usuário pra saber se ele quer alterar o rendimento da receita e chama a quantPorRendimento conforme a necessidade
void quantPorRendimento(int rend, int n, int *ptr_vet, int vRend, float vCusto);//recebe o código da alteraRendimento e o código da receita, e altera as quantidades da receita conforme p esperado
float *custoDinamica(int n); //Cria um vetor float com o custo dos pratos com alocação dinâmica
char confirmaEscolhaRec(int nReceita);

#endif	
