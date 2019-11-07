#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

int *inserirFim(int *lista, int *p,int valor){
    if (lista == NULL){
        lista = (int *) malloc(sizeof(int)*50); 
    }
    if((*p)<50){
        lista[*p] = valor;
    }
    (*p)++;

    return lista;
}

int *inserirInicio(int *lista, int *p, int valor){
    for (int i = *p; i >= 0 ; i--){
        lista[i] = lista[i-1];
    }
    lista[0] = valor;
    (*p)++;
    return lista;
}
int *inserirOrdenado(int *lista, int *p, int valor){
    int i;

    for (i = 0; i < *p; i++){
        if(valor < lista[i]){
            (*p)++;
            for (int j = *p; j >= i; j--){
                lista[j] = lista[j-1];
            }
            lista[i] = valor;
            break;
        }
    }

    if(valor > lista[i]){
        (*p)++;
        lista[i] = valor;
    }

    return lista;
}

int buscar(int *lista, int *p, int valor){
    for (int i = 0; i < *p; i++){
        if(valor == lista[i])
            return i;
    }

    return -1;
}

void remover(int *lista, int *p, int valor){
    int pos = buscar(lista, p, valor);

    if( pos != -1){
        for (int i = pos; i < *p; i++){
            lista[i] = lista[i+1];
        }
        (*p)--;
    }else{
        printf("Valor não encontrado!\n");
    }
}


void mostrar(int *lista, int *p){
    for (int i = 0; i < *p; i++)
        printf("%d ", lista[i]);
    printf("\n");
}

void tamanho(int *p){
    printf("%d\n", *p);
}


int menu(){
    int esc;
    printf("--------------------------------------\n");
    printf("--------1 - inserir Fim --------------\n");
    printf("--------2 - inserir Inicio -----------\n");
    printf("--------3 - inserir Ordenado ---------\n");
    printf("--------4 - remover ------------------\n");
    printf("--------5 - buscar -------------------\n");
    printf("--------6 - mostrar ------------------\n");
    printf("--------7 - tamanho ------------------\n");
    printf("--------0 - sair ---------------------\n");
    printf("Escolha uma das opções: ");
    scanf("%d",&esc);

    return esc;
}