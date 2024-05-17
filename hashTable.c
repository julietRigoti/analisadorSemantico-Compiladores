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

float calculateFloat(HashTable *h, char *name, char *name2, char* operator){
    float opF = 0;
    int index = hash(name);
    int index2 = hash(name2);
    struct cell *aux = h->table[index];
    struct cell *aux2 = h->table[index2];

    if (strcmp(operator, "+")){
        opF = aux->fVal + aux2->fVal;
        return opF;
    }
    else if (strcmp(operator, "-")){
        opF = aux->fVal - aux2->fVal;
        return opF;
    }
    else if (strcmp(operator, "*")){
        opF = aux->fVal * aux2->fVal;
        return opF;
    }
    else if (strcmp(operator, "/")){
       if(aux2->fVal != 0.00 && aux->fVal != 0.00 ){
            opF = aux->fVal / aux2->fVal;
        }
        else printf("Não é possivel efetuar a operação de divisão\n");     
        return opF;
    }
}

int calculateInt(HashTable *h, char *name, char *name2, char* operator){
    int op = 0;
    float opF;
    int index = hash(name);
    int index2 = hash(name2);
    struct cell *aux = h->table[index];
    struct cell *aux2 = h->table[index2];

    if (strcmp(operator, "+")){
        if(aux->type == 1)
            op = aux->iVal + aux2->iVal;
        return op;
    }
    else if (strcmp(operator, "-")){
        if(aux->type == 1)
            op = aux->iVal - aux2->iVal;
        return op;
    }
    else if (strcmp(operator, "*")){
        if(aux->type == 1)
            op = aux->iVal * aux2->iVal;
        return op;
    }
    else if (strcmp(operator, "/")){
       if(aux->type == 1)
            if(aux2->iVal != 0 && aux->iVal != 0 ){
                op = aux->iVal / aux2->iVal;
            }
            else printf("Não é possivel efetuar a operação de divisão\n");
        return op;
    }
}

void setType(HashTable *h, char *name, int type){
    int index = hash(name);
    struct cell *aux = h->table[index];
    aux->type = type;
}

void setCategory(HashTable *h, char *name, int cat){
    int index = hash(name);
    struct cell *aux = h->table[index];
    aux->category = cat;
}

struct cell *SearchParser(HashTable *h, char *name){
    int index = hash(name);
    struct cell *aux = h->table[index];
    while (aux != NULL && strcmp(aux->name, name)){
        aux = aux->prox;
    }
    return aux;
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

struct cell *slot(char *name, int len, int line, int type, int cat){
    struct cell *new_cell = (struct cell *)malloc(sizeof(struct cell));
    new_cell->lineno = line;
    new_cell->len = len;
    new_cell->type = type;
    new_cell->category = cat;
    switch (type){
    case 1:
        new_cell->iVal = atoi(name);
        break;
    case 2: 
        new_cell->fVal = atof(name);
        break;
    case 3: 
        strcpy(new_cell->cVal, name);
        break;
    case 6:
        strcpy(new_cell->cVal, name);
        break;
    default:
        break;
    }
    strcpy(new_cell->name, name);
    new_cell->prox = NULL;

    return new_cell;
}

void inserts(HashTable *h, char *name, int len, int line, int type, int cat){ 
    int index = hash(name);
    struct cell *aux = h->table[index];

    if (SearchToken(aux, name) == -1){
        h->table[index] = slot(name, len, line, type, cat);
    } else {
        struct cell *prev = NULL; // Track the previous cell
        while (aux != NULL) {
            prev = aux;
            aux = aux->prox;
        }
        prev->prox = slot(name, len, line, type, cat);
    }
}

void printHash(HashTable *H){
    struct cell *aux;
    int printed_names[MAX] = {0}; // Flag array to track printed names

    printf("----------------------------------------------------------------------------------\n");
    printf("|\tTOKEN \t\t|\tTipo\t\t|\tCategoria\t\t|\tLinha(s)\n");
    printf("----------------------------------------------------------------------------------\n");
     for (int i = 0; i < TAM; i++){
        aux = H->table[i];
        while (aux != NULL){
            printf("|%10s\t\t", aux->name);
            switch (aux->type)
            {
            case 1:
               printf("|\t TYPE_INT\t|");
                break;
            case 2:
                printf("|\t TYPE_REAL\t|");
                break;
            case 3:
                printf("|\t TYPE_STR\t|"); 
                break;
            case 4:
                printf("|\t TYPE_UNDEF\t|"); 
                break;
            case 5:
                printf("|\t TYPE_KEYWORD\t|"); 
                break;
            case 6: 
                printf("|\t TYPE_CHAR\t|");
                break;
            case 7:
                printf("|\t TYPE_VOID\t|"); 
                break;        
            default:
                break;
            }
            switch (aux->category){
            case 8:
               printf("\t  NUMBERS\t|");
                break;
            case 9:
                printf("\t VARIABLE\t|");
                break;
            case 10:
                printf("\t DATA_TYPE\t|"); 
                break;
            case 11:
                printf("\t CARACTER\t|"); 
                break;
            case 12:
                printf("\t LIBRARIES\t|"); 
                break;
            case 13: 
                printf("\t OPERATOR\t|");
                break;
            case 14:
                printf("\t PARAMETER\t|"); 
                break;        
            default:
                printf("\t          \t|");
                break;
            }
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