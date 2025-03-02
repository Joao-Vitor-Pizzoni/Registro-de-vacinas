#ifndef FILAESTATICA_H_INCLUDED
#define FILAESTATICA_H_INCLUDED
typedef struct pessoas
{
    char nome[100];
    char comorbidade;
    int idade;

} Pessoas;


typedef struct fila
{
    Pessoas filas[100];
    int inicio, fim;
} Fila;


void push_fila(Fila *f,char x[100],int y,char z );

Pessoas pop_fila(Fila *f);

Fila * cria_fila();

int vazia_fila(Fila *f);

int busca_fila(Fila*f,int x);

free_fila();

#endif // FILAESTATICA_H_INCLUDED
