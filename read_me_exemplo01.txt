Exemplos de como trabalhar com listas encadeadas;

struct lista
{
    int info;
    struct lista *prox;
};


typedef struct lista Lista;
=> defini o sinonimo de struct lista como Lista;


Lista *chamada_add_elemento(Lista *);
=>chama a funçao para adicionar um elemento na lista;


Lista *criar_lista_vazia(Lista *);
=>cria uma lista vazia onde aponta para NULL;


Lista *adicionar_elemento_inicio(Lista *);
=> Adiciona um elemento no inicio da lista;


Lista *divide_lista(Lista *, int *);
=>Divide a lista em 2  e partes (l1)e(l2) onde a quebra é escolhida de acordo com o valor elemento lista->info; 


//Lista *limpa_lista_dividida(Lista *, int);
=> Funçao que devolve a memoria a partir do elemento lista->info escolhido porém esta como comentario pois ira trazes erros para continuação do programa main, pois a mesma apaga os elementos da lisa2(l2);


Lista *ordena_lista_crescente(Lista *);


void imprime_lista(Lista *);
=>Função que imprime as listas;
