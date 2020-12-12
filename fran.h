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

/* 
2 - Alem disso, a tua funcao recursiva apenas mostra outra receita de forma bastante questionavel.
Caso o usuario queria ver N receitas, havera N instancias de mostraListaRecursiva() na memoria.

La tem a receita base, mas se o usuario quiser ajustar a receita ao numero de pessoas, o site ajusta sozinho a proporcao dos ingredientes. Muito legal.
Se tu colocar essa funcionalidade no teu site, poderas criar funcoes com passagem por referencia, teras oportunidade de trabalhar com strings e finalmente,
 uma funcao recursiva pode sair de forma mais funcional.
*/
