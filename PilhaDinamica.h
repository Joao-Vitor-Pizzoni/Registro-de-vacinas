#ifndef PILHADINAMICA_H_INCLUDED
#define PILHADINAMICA_H_INCLUDED

typedef struct
{
        char marca[100];
        char lote[100];

}Vacina;

typedef struct Nodo
{
    Vacina vacina;
    struct Nodo *prox;

}nodo;

typedef struct pilha
{
    nodo *topo;
}Pilha;

Pilha *cria_Pilha();

int vaz(Pilha *p);

void push(Pilha *p, char x[100], char y[100]);

Vacina pop(Pilha *p);

int busca_pilha(Pilha *p,int x);

#endif // PILHADINAMICA_H_INCLUDED

