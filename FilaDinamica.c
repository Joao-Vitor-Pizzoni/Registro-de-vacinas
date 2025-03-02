/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FilaDinamica.h"

Fila *cria_fila()
{
    Fila *f = (Fila *)malloc(sizeof(Fila));
    f->inicio = f->fim = NULL;
    return f;
}

int vazia_fila(Fila *f)
{
    if(f->inicio == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void push_fila(Fila *f, char x[100], int y, char q)
{
    modo *z = (modo *)malloc(sizeof(modo));
    strcpy(z->pessoa.nome, x);
    z->pessoa.idade = y;
    z->pessoa.comorbidades = q;
    z->prox = NULL;
    if (f->fim != NULL)
    {
     f->fim->prox = z;
    }
    f->fim = z;
    if (f->inicio==NULL)
    {
    f->inicio = z;
    }

}

Pessoas pop_fila(Fila *f)
{
    Pessoas x = f->inicio->pessoa;
    modo *aux = f->inicio->prox;
    if(f->fim == f->inicio)
    {
        f->fim = NULL;
    }
    free(f->inicio);
    f->inicio = aux;
    return x;
}

int busca_fila(Fila *f,int x)
{
    if(f->inicio==NULL)
    {
        return 0;
    }
    else
    {
        while(f->inicio!= NULL)
        {
            x++;
            f->inicio = f->inicio->prox;
        }
        return x;
    }
}
*/
