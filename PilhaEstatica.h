#ifndef PILHAESTATICA_H_INCLUDED
#define PILHAESTATICA_H_INCLUDED
typedef struct vacina
{
    char marca[100];
    char lote[100];

}Vacina;

typedef struct pilha
{
    Vacina vacina[100];
    int topo;

} Pilha;

Pilha*cria_Pilha();

int vaz(Pilha *p);

void push(Pilha*p, char x[100], char y[100]);

Vacina pop(Pilha*p);

int busca_pilha(Pilha *p,int x);

free_pilha();


#endif // PILHAESTATICA_H_INCLUDED
