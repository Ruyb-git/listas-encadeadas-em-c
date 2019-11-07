#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

void main(){
    int *lista = NULL, p = 0, esc, valor, pos;

    while(0==0){
    	esc = menu();

    	switch(esc){
    		case 1:
    			system("cls || clear");
    			printf("Digite o valor que deseja inserir: ");
    			scanf("%d",&valor);
    			lista = inserirFim(lista, &p, valor);
    			break;
    		case 2:
    			system("cls || clear");
    			printf("Digite o valor que deseja inserir: ");
    			scanf("%d",&valor);
    			lista = inserirInicio(lista, &p, valor);
    			break;
    		case 3:
    			system("cls || clear");
    			printf("Digite o valor que deseja inserir: ");
    			scanf("%d",&valor);
    			lista = inserirOrdenado(lista, &p, valor);
    			break;
    		case 4:
    			system("cls || clear");
    			printf("Digite o valor que deseja remover: ");
    			scanf("%d",&valor);
    			remover(lista, &p, valor);
    			break;
    		case 5:
    			system("cls || clear");
    			printf("Digite o valor que deseja buscar: ");
    			scanf("%d",&valor);
    			pos = buscar(lista, &p, valor);
    			if(pos != -1)
    				printf("O número %d está na posição %d.\n", valor, pos );
    			else
    				printf("Número não encontrado!\n");
    			break;
    		case 6:
    			system("cls || clear");
    			printf("A lista: ");
    			mostrar(lista, &p);
    			break;
    		case 7:
    			system("cls || clear");
    			printf("Tamanho da lista: ");
    			tamanho(&p);
    			break;
    		case 0:
    			free(lista);
    			exit(1);
    	}
    }
}