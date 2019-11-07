#include<stdio.h>
#include<stdlib.h>
#define tam 100

int *inserirFim(int *lista, int *p,int valor);
int *inserirInicio(int *lista, int *p, int valor);
int *inserirOrdenado(int *lista, int *p, int valor);
void remover(int *lista, int *p, int valor);
int buscar(int *lista, int *p, int valor);
void mostrar(int *lista, int *p);
void tamanho(int *p);
int menu();

