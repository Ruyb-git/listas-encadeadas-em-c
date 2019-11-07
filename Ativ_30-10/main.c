#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

void main(){
	No *lista;

	int esc,num,pos;

	while(0==0){
		esc = menu();

		switch (esc){
			case 1:
				lista = criarLista();
				break;
			case 2:
				system("cls || clear");
				printf("Informe um novo valor: ");
				scanf("%d",&num);
				lista = inserirLista(lista, num);
				break;
			case 3:
				system("cls || clear");
				printf("Informe um novo valor: ");
				scanf("%d",&num);
				lista = inserirFim(lista, num);
				break;
			case 4:
				system("cls || clear");
				printf("Informe um novo valor: ");
				scanf("%d",&num);
				lista = inserirOrdenado(lista, num);
				break;
			case 5:
				system("cls || clear");
				printf("Informe o valor que deseja excluir: ");
				scanf("%d",&num);
				lista = remover(lista, num);
				break;
			case 6:
				system("cls || clear");
				printf("Informe o valor que deseja buscar: ");
				scanf("%d",&num);
				No *aux = buscar(lista, num);
				if(aux == NULL)
					printf("Valor não encontrado!!\n");
				else
					printf("O valor %d foi encontrado !!\n",num);
				break;
			case 7:
				system("cls || clear");
				mostrar(lista);
				break;
			case 0:
				liberar(lista);
				exit(1);
		}
	}
}