#include "hashTable.h"

HashTable *initialization()
{
    int i;
    HashTable *aux = (HashTable *)malloc(sizeof(HashTable)); // alloca o primeiro ponteiro
    aux->table = (struct cell **)malloc(
        TAM * sizeof(struct cell *)); // cria o vetor de ponteiros
    for (i = 0; i < TAM; i++)
    {
        aux->table[i] = NULL;
    }
    return aux;
}

int hash(char *name)
{
    int sum = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        sum += name[i];
    }
    return sum % TAM;
}

int SearchToken(struct cell *aux, char *name)
{
    int index = hash(name);
    while (aux != NULL && strcmp(aux->name, name))
    {
        aux = aux->prox;
    }
    if (aux == NULL)
        return -1;
    else
        return index;
}

void inserts(HashTable *h, char *name, int len, int line)
{

    int index = hash(name);
    struct cell *aux = h->table[index];

    if (SearchToken(aux, name) != -1)
    {
        struct cell *new_cell = (struct cell *)malloc(sizeof(struct cell));
        new_cell->lineno = line;
        new_cell->len = len;
        strcpy(new_cell->name, name);
        new_cell->prox = NULL;
        while (aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = new_cell;
    }
    else {
        struct cell *entry = (struct cell *)malloc(sizeof(struct cell));
        entry->lineno = line;
        entry->len = len;
        strcpy(entry->name, name);
        entry->prox = h->table[index];
        h->table[index] = entry;
    }
}

void printHash(HashTable *H)
{
    struct cell *aux;
    int printed_names[TAM] = {0}; // Flag array to track printed names

    printf("---------------------------------------------------------\n");
    printf("|\tTOKEN \t\t |   Linha(s)   |\n");
    printf("---------------------------------------------------------\n");
    for (int i = 0; i < TAM; i++)
    {
        aux = H->table[i];
        while (aux != NULL)
        {
            if (!printed_names[i])
            {
                // Print name only once
                printf("|%10s\t\t", aux->name);
                printed_names[i] = 1;
            }
            printf("%2d", aux->lineno);
            aux = aux->prox;
            while (aux != NULL)
            {
                printf(" -> %2d", aux->lineno);
                aux = aux->prox;
            }
            printf("\t\n");
        }
    }
}