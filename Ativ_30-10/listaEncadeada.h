//
//  listaEncadeada.h
//  tad1-1610
//
//  Created by Antonio Oseas on 30/10/19.
//  Copyright © 2019 Antonio Oseas. All rights reserved.
//

#ifndef listaEncadeada_h
#define listaEncadeada_h

typedef struct no No;
No *criarListaEncadeada();
No *inserir(No *lista, int v);
void mostrarLista(No *lista);
No *remover(No *lista, int valor);
void liberar(No *lista);
No *buscar(No *lista, int v);
No *inserirFim(No *lista, int v);
No *inserirOrdenado(No *lista, int v);
int menu();
#endif /* listaEncadeada_h */
