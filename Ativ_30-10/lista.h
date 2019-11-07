#include<stdio.h>
#include<stdlib.h>

typedef struct no No;

No *criarLista();
No *inserirLista(No *lista, int valor);
No *inserirFim(No *lista, int valor);
No *inserirOrdenado(No *lista, int valor);
void *mostrar(No *lista);
No *remover(No *lista, int valor);
No *buscar(No *lista, int valor);
void liberar(No *elemento);
int menu();
