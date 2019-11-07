//
//  listaEstatica.h
//  tad1-1610
//
//  Created by Antonio Oseas on 29/10/19.
//  Copyright © 2019 Antonio Oseas. All rights reserved.
//

#ifndef listaEstatica_h
#define listaEstatica_h

#define tam 1000
enum opcoes_menu{
    _sair = 0,
    _inserirFim,
    _remover,
    _buscar,
    _mostrar,
    _tamanho
};
int *criarLista();
int *inserirFim(int *lista, int *p, int valor);
int *inserirInicio(int *lista, int *p, int valor);
int *inserirOrdenado(int *lista, int *p, int valor);
void remover(int *lista, int *p, int valor);
int buscar(int *lista, int *p, int valor);
void mostrar(int *lista, int *p);
void tamanho(int *p);
int menu();
#endif /* listaEstatica_h */
