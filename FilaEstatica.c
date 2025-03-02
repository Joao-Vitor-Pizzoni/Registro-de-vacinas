#include "FilaEstatica.h"
#include <string.h>

Fila *cria_fila()
{
    Fila *f = (Fila *)malloc(sizeof(Fila));
    f-> inicio = f->fim = 0;
}

int vazia_fila(Fila *f)
{
    if(f->inicio == f->fim)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void push_fila(Fila *f, char x[100], int y,char z)
{
    strcpy(f->filas[f->fim].nome,x);
    f->filas[f->fim].idade = y;
    f->filas[f->fim].comorbidade = z;
    f->fim = (f->fim+1)%100;
}

Pessoas pop_fila(Fila *f)
{
    Pessoas t = f->filas[f->inicio];
    f->inicio = (f->inicio + 1)%100;
    return t;
}

int busca_fila(Fila*f,int x)
{
    if(f->inicio == 0)
    {
        return 0;
    }
    else
    {
        while(f->inicio!=f->fim)
        {
            x++;
            f->inicio++;
        }
        return x;
    }
}
