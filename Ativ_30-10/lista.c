#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

struct no{
	int info;
	No *prox;
};

//------------------------------------------------------------------ CRIAR LISTA
No *criarLista(){
	return NULL;
}

//------------------------------------------------------------------ INSERIR
No *inserirLista(No *lista, int valor){
	No *novo;

	novo = (No*) malloc(sizeof(No));
	novo->info = valor;
	novo->prox = lista;

	return novo;
}
//------------------------------------------------------------------ INSERIR NO FINAL
No *inserirFim(No *lista, int valor){
	No *novo, *aux;

	novo = (No*) malloc(sizeof(No));
	novo -> info = valor;
	novo -> prox = NULL;
	//se for o primeiro elemento
	if(lista == NULL){
		novo -> prox = lista;
		return novo;
	}
	else{
		//ir até o final
		aux = lista;
		while(aux-> prox != NULL)
			aux = aux -> prox;
        //refazer os apontamentos
		novo -> prox = aux -> prox;
		aux -> prox = novo;
		return lista;
	}
}
//------------------------------------------------------------------ INSERIR ORDENADO
No *inserirOrdenado(No *lista, int valor){
	No *novo;

	novo = (No*) malloc(sizeof(No));
	novo -> info = valor;

	if (lista == NULL){
		novo -> prox = lista;
		return novo;
	}else{
		No *aux = lista;
		No *anterior;
		while(aux -> info < valor){ // busca a posição que deve inserir
			anterior = aux;
			aux = aux -> prox;
			if(aux == NULL)
				break;
		}
		if(anterior == NULL)   // insere no começo da lista
			return inserirLista(lista, valor);
		if(aux == NULL)		// insere no final da lista
			return inserirFim(lista, valor);
		novo -> prox = aux;
		anterior -> prox = novo;
		return lista;
		
	}
}
// ----------------------------------------------------------------- REMOVER
No *remover(No *lista, int valor){
	No *aux = lista;
	No *anterior = NULL;
	if(lista == NULL)
		printf("Lista vazia!\n");
	else{
		while(aux != NULL){
			if(aux -> info == valor){ //encontra o valor que deseja excluir
				if(anterior == NULL){ //remove o primeiro valor da lista
					free(aux);
					lista = aux -> prox;
					break;
				}
				anterior -> prox = aux -> prox; //liga os pontos vizinhos do que será excluido
				free(aux);
				break;
			}
			anterior = aux;  // 		percorre o 
			aux = aux -> prox; //			while
		}
	}
	return lista;
}
//------------------------------------------------------------------ BUSCAR
No *buscar(No *lista, int valor){
	No *aux = lista;
	if (lista == NULL){
		printf("Lista vazia!!\n");
		return NULL;
	}else{
		while(aux != NULL){
			if(aux -> info == valor){
				return aux;
			}
			aux = aux -> prox;
		}
	}
}

//------------------------------------------------------------------ MOSTRAR
void *mostrar(No *lista){
	No *aux = lista;
	if (lista == NULL){
		printf("Lista vazia!!\n");
		return NULL;
	}else{
		while(aux != NULL){
			printf("%d ", aux->info );
			aux = aux -> prox;
		}
		printf("\n");
	}
}
//------------------------------------------------------------------- LIBERAR
void liberar(No *elemento){
	No *aux = elemento;
	while(aux != NULL){
		free(aux);
		aux = aux -> prox;
	}
}
//------------------------------------------------------------------- MENU
int menu(){
	int esc;
	printf("==================================\n");
	printf("|-------- 1 - Criar lista -------|\n");
	printf("|-------- 2 - Inserir valor -----|\n");
	printf("|-------- 3 - Inserir no final --|\n");
	printf("|-------- 4 - Inserir ordenado --|\n");
	printf("|-------- 5 - Remover -----------|\n");
	printf("|-------- 6 - Buscar ------------|\n");
	printf("|-------- 7 - Exibir lista ------|\n");
	printf("|-------- 0 - Liberar e sair ----|\n");
	printf("==================================\n");
	printf("Escolha:");
	scanf("%d",&esc);

	return esc;
}