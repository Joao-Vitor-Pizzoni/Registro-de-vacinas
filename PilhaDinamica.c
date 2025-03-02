/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PilhaDinamica.h"

Pilha *cria_Pilha()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

int vaz(Pilha *p)
{
    if(p->topo == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void push(Pilha *p, char x[100], char y[100])
{
    nodo *z = (nodo *)malloc(sizeof(nodo));
    strcpy(z->vacina.marca, x);
    strcpy(z->vacina.lote, y);
    z->prox = p->topo;
    p->topo = z;
}

Vacina pop(Pilha *p)
{
    Vacina t = p->topo->vacina;
    nodo *aux = p->topo->prox;
    free(p->topo);
    p->topo = aux;

    return t;
}

int busca_pilha(Pilha *p,int x)
{
    if(p->topo==NULL)
    {
        return 0;
    }
    else{
        while(p->topo!=NULL)
        {
            x++;
            p->topo = p->topo->prox;
        }
        return x;
    }
}
*/
