#ifndef FILADINAMICA_H_INCLUDED
#define FILADINAMICA_H_INCLUDED

typedef struct Pessoa
{
    char nome[100];
    int idade;
    char comorbidades;

} Pessoas;

typedef struct Modo
{
    Pessoas pessoa;
    int *prox;

} modo;

typedef struct
{
    modo *inicio;
    modo *fim;

} Fila;

Fila *cria_fila();

int vazia_fila(Fila *f);

void push_fila(Fila *f, char x[100], int y, char q);

Pessoas pop_fila(Fila *f);

int busca_fila(Fila*f,int x);

#endif // FILADINAMICA_H_INCLUDED

