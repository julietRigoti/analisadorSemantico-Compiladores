#include "hashTable.h"

HashTable *initialization(){
    int i;
    HashTable *aux = (HashTable *)malloc(sizeof(HashTable)); // alloca o primeiro ponteiro
    aux->table = (struct cell **)malloc(TAM * sizeof(struct cell *)); // cria o vetor de ponteiros
    for (i = 0; i < TAM; i++){
        aux->table[i] = NULL;
    }
    return aux;
}

int hash(char *name){
    int sum = 0;
    for (int i = 0; name[i] != '\0'; i++){
        sum += name[i];
        sum += 100;
    }
    return sum % TAM;
}

int SearchToken(struct cell *aux, char *name){
    int index = hash(name);
    while (aux != NULL && strcmp(aux->name, name)){
        aux = aux->prox;
    }
    if (aux == NULL){
        return -1;
    }else{
        return index;
    } 
}

struct cell *slot(char *name, int len, int line, char *type){
    struct cell *new_cell = (struct cell *)malloc(sizeof(struct cell));
    new_cell->lineno = line;
    new_cell->len = len;
    strcpy(new_cell->type, type);
    strcpy(new_cell->name, name);
    new_cell->prox = NULL;

    return new_cell;
}

void inserts(HashTable *h, char *name, int len, int line, char *type){ 
    int index = hash(name);
    struct cell *aux = h->table[index];

    if (SearchToken(aux, name) == -1){
        h->table[index] = slot(name, len, line, type);
    } else {
        struct cell *prev = NULL; // Track the previous cell
        while (aux != NULL) {
            prev = aux;
            aux = aux->prox;
        }
        prev->prox = slot(name, len, line, type);
    }
}

void printHash(HashTable *H){
    struct cell *aux;
    int printed_names[MAX] = {0}; // Flag array to track printed names

    printf("----------------------------------------------------------------------------------\n");
    printf("|\tTOKEN \t\t|\tTipo\t|\tLinha(s)\n");
    printf("----------------------------------------------------------------------------------\n");
     for (int i = 0; i < TAM; i++){
        aux = H->table[i];
        while (aux != NULL){
            printf("|%10s\t\t", aux->name);
            printf("|%10s\t|", aux->type);
            printf("%2d", aux->lineno);
            aux = aux->prox;
            while (aux != NULL){
                printf(" -> %2d", aux->lineno);
                aux = aux->prox;
            }
            printf("\t\n");
        }
    }
}