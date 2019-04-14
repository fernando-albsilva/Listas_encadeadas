#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int info;
    struct lista *prox;
};

typedef struct lista Lista;
Lista *chamada_add_elemento(Lista *);
Lista *criar_lista_vazia(Lista *);
Lista *adicionar_elemento_inicio(Lista *);
Lista *divide_lista(Lista *, int *);
//Lista *limpa_lista_dividida(Lista *, int);
Lista *ordena_lista_crescente(Lista *);
void imprime_lista(Lista *);

int main()
{
    Lista *l, *l2;
    int n, *p_n = &n;

    l = criar_lista_vazia(l);

    l = chamada_add_elemento(l);

    l2 = divide_lista(l, p_n);

    // l = limpa_lista_dividida(l, n);
    printf("\n Lista 1");
    imprime_lista(l);
    printf("\n Lista 2:");
    imprime_lista(l2);

    l = ordena_lista_crescente(l);
    l2 = ordena_lista_crescente(l2);

    printf("\n Lista 1");
    imprime_lista(l);
    printf("\n Lista 2:");
    imprime_lista(l2);

    return 0;
}

Lista *criar_lista_vazia(Lista *l)
{
    return NULL;
}
Lista *chamada_add_elemento(Lista *l)
{
    int teste = 0;

    do
    {
        teste = 0;
        printf("\n Deseja adicionar elemento ao inicio da fila <1> sim <2>nao : \n");
        scanf("%d", &teste);
        if (teste == 1)
        {
            l = adicionar_elemento_inicio(l);
        }
    } while (teste == 1);
    return l;
}
Lista *adicionar_elemento_inicio(Lista *l)
{
    Lista *elemento_novo;

    elemento_novo = (Lista *)malloc(sizeof(Lista));
    elemento_novo->prox = l;
    printf("\nDigite o valor do novo elemento:");
    scanf("%d", &elemento_novo->info);
    l = elemento_novo;
    return l;
}
Lista *divide_lista(Lista *l, int *p_n)
{

    printf("\n Digite em qual valor do elemento info a lista sera dividida : \n");
    scanf("%d", &*p_n);

    for (;;)
    {
        if (l->info == *p_n)
        {
            l = l->prox;
            return l;
        }
        if (l->prox == NULL)
        {
            printf("\n Esta lista nao contem este valor do elemento info : \n");

            exit(1);
        }

        l = l->prox;
    }
}
//  Lista *limpa_lista_dividida(Lista *l, int n)
//  {
//     Lista *p_aux;
//     Lista *p_inicio;
//     p_inicio = l;
//     for (;;)
//     {
//         if (l->info == n)
//         {
//             p_aux = l->prox;
//             l->prox = NULL;

//              for(;;)
//             {
//                 l = p_aux->prox;
//                 free(p_aux);
//                 p_aux = l;
//                 if (p_aux->prox == NULL)
//                 {
//                     break;
//                 }
//             }
//             break;
//         }
//         l = l->prox;
//     }

//     return p_inicio;
//  }
void imprime_lista(Lista *l)
{
    for (;;)
    {
        printf("\nelemento info = %d\n", l->info);
        if (l->prox == NULL)
        {
            break;
        }
        l = l->prox;
    }
    printf("\n-------------------------------------------\n");
}

Lista *ordena_lista_crescente(Lista *l)
{
    

}