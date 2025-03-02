#include "PilhaEstatica.h"
#include <string.h>

Pilha *cria_Pilha()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = -1;
    return p;
}

int vaz(Pilha *p)
{
    if(p->topo == -1)
    {
            return 0;
    }else
    {
        return 1;
    }
}

void push(Pilha*p, char x[100], char y[100])
{
    p->topo++;
    strcpy(p->vacina[p->topo].marca,x);
    strcpy(p->vacina[p->topo].lote,y);
}

Vacina pop(Pilha *p)
{
    Vacina t = p->vacina[p->topo];
    p->topo--;
    return t;
}

int busca_pilha(Pilha *p,int x)
{
    if(p->topo == -1)
    {
        return 0;
    }
    else
    {
        while(p->topo!= -1)
        {
            x++;
            p->topo--;
        }
        return x;
    }
}
