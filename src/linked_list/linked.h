#ifndef     LINKED_H
#define     LINKED_H

#include <stdio.h>

struct node
{
    long int data;
    struct node *next;
};
typedef struct node node_t;

// inicialização

void init_list(node_t **);

// tamanho da lista

size_t get_size_of_list(node_t **);

// inserção

void append_back(node_t **, long int);
void append_in_end(node_t **, long int);
void append_in_middle(node_t **, long int, unsigned int);



#endif //   LINKED_H
