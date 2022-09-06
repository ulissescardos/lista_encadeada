#include "./linked.h"

#include <stdlib.h>

/*
    **************************************
            Inicialização
    **************************************
*/
void init_list(node_t** first)
{
    *first = NULL;
}

/*
    ******************************************
            Print da lista
    ******************************************
*/

void show_list(node_t **first)
{
    size_t i = 0;

    node_t* iterate;

    iterate = *first;

    if(iterate == NULL)
    {
        puts("Lista Vazia");
        return;
    }
    
    printf("Lista :: ");

    do
    {
        printf(" %d", iterate->data);
        iterate = iterate->next;
    }
    while(iterate != NULL);

    puts("");
    
}

/*
    ************************r*************
            Tamanho da Lista
    *************************************
*/

size_t get_size_of_list(node_t** first)
{
    node_t *iterate;

    size_t size = 0;

    if(*first != NULL)
    {
        iterate = *first;

        while(iterate != NULL)
        {
            size++;
            iterate = iterate->next;
        }
    }
    else
    {
        size = 0;
    }

    return size;

}



/*
    ***************************************
                Inserção
    ***************************************
*/


void append_back(node_t** first, long int value)
{
    node_t* new;

    new = (node_t *) calloc(1, sizeof(node_t));
    new->data = value;

    if(*first == NULL)
    {
        // inserção na lista vazia
        new->next = NULL;
        
        *first = new;
    }
    else
    {
        //inserção na lista não vazia
        new->next = *first;

        *first = new;
    }
}

void append_in_end(node_t** first, long int value)
{
    node_t* iterate;
    node_t* new;

    new = (node_t *) calloc(1, sizeof(node_t));

    new->data = value;
    new->next = NULL;

    if(*first == NULL)
    {
        // lista vazia
        *first = new;
    }
    else
    {
        // lista não vazia

        iterate = *first;

        while(iterate->next != NULL)
        {
            iterate = iterate->next;
        }

        iterate->next = new;
    }

}

void append_in_middle(node_t** first, long int value, unsigned int index)
{
    node_t* iterate;
    node_t* new;

    // tratamento de erros
    size_t size = get_size_of_list(first);

    if(index > size+1)
    {
        puts("posicao invalida. Acima do tamanho da lista");
        exit(1);
    }

    //

    new = (node_t *) calloc(1, sizeof(node_t));

    new->data = value;

    if(index == 1)
    {
        append_back(first, value);
    }
    else if(index == size + 1)
    {
        append_in_end(first, value);
    }
    else
    {
        unsigned int index_aux = 1;

        iterate = *first;

        while(index_aux != index)//para uma casa antes
        {
            iterate = iterate->next;
            index_aux++;
        }

        new->next = iterate->next;
        iterate->next = new;
    }

}

/*
    ****************************************
            Idíce de um valor
    ****************************************
*/

long int get_index_of(node_t **first, long int value)
{
    unsigned int index = 0;

    node_t *iterate;

    iterate = *first;

    while(iterate != NULL)
    {
        index++;

        if(value == iterate->data)
        {
            return index;
        }

        iterate = iterate->next;
    }

    if(index >= get_size_of_list(first)+1)
    {
        printf("index of %u not found\n", value);
        return index;
    }

}

/*
    ****************************************
                Remoção
    ****************************************
*/


void pop_back(node_t** first)
{
    node_t* iterate;

    iterate = *first;

    if(iterate == NULL)
    {
        printf("A lista está vazia, remover itens é impossível");
        return;
    }
    else
    {
        node_t* aux;

        aux = *first;

        iterate = iterate->next;

        free(aux);
    }
}

