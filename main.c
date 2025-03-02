#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "PilhaEstatica.h"
#include "FilaEstatica.h"


int main()
{

    // Variáveis de entrada das informações //
    char nome[100];      // --> Nome da pessoa
    char marca[100];     // --> Marca da vacina
    char lote[100];      // --> Lote da vacina
    char tipoFila[100];  // --> Tipo de fila para as pessoas
    char comorbidades;   // --> Para ver se a pessoa tem comorbidade ou não
    char teste;          // --> Para receber o primeiro caracter
    int idade = 0;       // --> Recebe idade
    int quantidade = 0;  // --> Quantidade de vacina


    // Variáveis de contagem //
    int verdade = 1;      // --> Verdadeiro para rodar até o 'F' ser digitado
    int i = 0;            // --> Para os for
    int vacina_idoso = 0; // --> resto de vacinas
    int vacina_comor = 0; // --> resto de vacinas
    int vacina_geral = 0; // --> resto de vacinas
    int resto_idoso = 0;  // --> Pessoas na fila
    int resto_comor = 0;  // --> Pessoas na fila
    int resto_geral = 0;  // --> Pessoas na fila

    // Pilhas e filas //
    Pilha*idoso = cria_Pilha();
    Pilha*comorbidade = cria_Pilha();
    Pilha*geral = cria_Pilha();

    Fila*fila_idoso = cria_fila();
    Fila*fila_comorbidade = cria_fila();
    Fila*fila_geral = cria_fila();


    while(verdade)
    {
        scanf("%c",&teste);
        switch(teste)
        {
        case '+':
                scanf("%s %d %c",&nome,&idade,&comorbidades);

                if(idade>=60)
                {
                    push_fila(fila_idoso,nome,idade,comorbidades);
                }
                else if((idade<60)&&(comorbidades == 'S'))
                {
                    push_fila(fila_comorbidade,nome,idade,comorbidades);
                }
                else if((idade<60)&&(comorbidades == 'N'))
                {
                    push_fila(fila_geral,nome,idade,comorbidades);
                }
                break;

        case 'i':
                scanf("%s %s %d",&marca,&lote,&quantidade);
                for(i=0;i<quantidade;i++)
                {
                    push(idoso,marca,lote);
                }
                break;

        case 'g':
                scanf("%s %s %d",&marca,&lote,&quantidade);
                for(i=0;i<quantidade;i++)
                {
                    push(geral,marca,lote);
                }
                break;

        case 'c':
                scanf("%s %s %d",&marca,&lote,&quantidade);
                for(i=0;i<quantidade;i++)
                {
                    push(comorbidade,marca,lote);
                }
                break;


        case '-':
                scanf("%s",&tipoFila);
                switch(tipoFila[0])
                {
                    case 'i':
                        if((vaz(idoso))&&(vazia_fila(fila_idoso)))
                        {
                            Vacina lol = pop(idoso);
                            Pessoas qwe = pop_fila(fila_idoso);
                            printf("%s (%d anos, sem comorbidades), vacinado(a) com %s, lote n. %s\n",qwe.nome,qwe.idade,lol.marca,lol.lote);
                            break;
                        }
                        else if((vaz(idoso)== 0 )&&(vazia_fila(fila_idoso)))
                        {
                            printf("Sem doses disponiveis.\n");
                            break;
                        }
                        else if((vaz(idoso)==0)&&(vazia_fila(fila_idoso) == 0))
                        {
                            printf("Fila vazia.\n");
                        }
                        break;

                case 'g':

                        if((vaz(geral))&&(vazia_fila(fila_geral)))
                        {
                            Vacina lol_1 = pop(geral);
                            Pessoas qwe_1 = pop_fila(fila_geral);
                            printf("%s (%d anos, sem comorbidades), vacinado(a) com %s, lote n. %s\n",qwe_1.nome,qwe_1.idade,lol_1.marca,lol_1.lote);
                            break;
                        }
                        else if((vaz(geral)== 0 )&&(vazia_fila(fila_geral)))
                        {
                            printf("Sem doses disponiveis.\n");
                            break;
                        }
                        else if((vaz(geral)==0)&&(vazia_fila(fila_geral) == 0))
                        {
                            printf("Fila vazia.\n");
                        }
                        break;


               case 'c':
                        if((vaz(comorbidade))&&(vazia_fila(fila_comorbidade)))
                        {
                            Vacina lol_2 = pop(comorbidade);
                            Pessoas qwe_2 = pop_fila(fila_comorbidade);
                            printf("%s (%d anos, com comorbidades), vacinado(a) com %s, lote n. %s\n",qwe_2.nome,qwe_2.idade,lol_2.marca,lol_2.lote);
                            break;
                        }
                        else if((vaz(comorbidade)==0)&&(vazia_fila(fila_comorbidade)))
                        {
                            printf("Sem doses disponiveis.\n");
                            break;
                        }
                        else if((vaz(comorbidade)==0)&&(vazia_fila(fila_comorbidade) == 0))
                        {
                            printf("Fila vazia.\n");
                        }
                        break;

                }
                break;

        case 'F':
            printf("--\n");
            printf("Restaram %d idoso(s).\nRestaram %d pessoa(s) com comorbidades.\nRestaram %d pessoa(s) no geral.\n",busca_fila(fila_idoso,resto_idoso),busca_fila(fila_comorbidade,resto_comor),busca_fila(fila_geral,resto_geral));
            printf("--\n");
            printf("Sobraram %d dose(s) para idosos.\nSobraram %d dose(s) para pessoas com comorbidades.\nSobraram %d dose(s) para pessoas no geral.",busca_pilha(idoso,vacina_idoso),busca_pilha(comorbidade,vacina_comor),busca_pilha(geral,vacina_geral));

            verdade = 0;
            break;
        }


    }
        free(idoso);
        free(comorbidade);
        free(geral);
        free(fila_comorbidade);
        free(fila_geral);
        free(fila_idoso);
    return 0;
}
