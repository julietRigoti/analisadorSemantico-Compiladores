#include "hashTable.h"

HashTable *initialization(){
    int i;
    HashTable *aux = (HashTable *)malloc(sizeof(HashTable)); // Allocate memory for HashTable structure
    if (aux == NULL) {  // Check for allocation failure
        return NULL;
    }

    aux->table = (struct cell **)malloc(TAM * sizeof(struct cell *));  // Allocate memory for table array
    if (aux->table == NULL) {  // Check for allocation failure
        free(aux);  // Release previously allocated memory
        return NULL;
    }

    for (i = 0; i < TAM; i++) {
        aux->table[i] = NULL;  // Initialize each cell pointer to NULL
    }

    return aux;
}

int hash(char *name){
    int sum = 0;
    for (int i = 0; name[i] != '\0'; i++){
        sum += name[i];
        sum *= 2;
    }
    return sum % TAM;
}

void getValue(HashTable *h, char *name, char *op){
    int index = hash(name);
    int index2 = hash(op);
    struct cell *aux = h->table[index];
    struct cell *aux2 = h->table[index2];
    
    switch (aux2->type){
    case 1:
        aux->iVal = atoi(aux2->name);
        break;
    case 2: 
        aux->fVal = atof(aux2->name);
        break;
    case 3: case 6:
        strcpy(aux->cVal, aux2->name);
        break;
    default:
        break;
    }
    
}

void calculateTest(HashTable *h, char *name, char *name2, char* operator, char *destino){
    int index = hash(name);
    int index2 = hash(name2);
    struct cell *aux = h->table[index];
    struct cell *aux2 = h->table[index2];

    if (strcmp(operator, "+") == 0){
        if(aux->type == 1){
            sprintf(destino, "%d", aux->iVal + aux2->iVal);
        } else {
            sprintf(destino, "%.2f", aux->fVal + aux2->fVal);
        }
    }
    else if (strcmp(operator, "-") == 0){
        if(aux->type == 1){
            sprintf(destino, "%d", aux->iVal - aux2->iVal);
        } else {
            sprintf(destino, "%.2f", aux->fVal - aux2->fVal);
        }
    }
    else if (strcmp(operator, "*") == 0){
       if(aux->type == 1){
            sprintf(destino, "%d", aux->iVal * aux2->iVal);
        } else {
            sprintf(destino, "%.2f", aux->fVal * aux2->fVal);
        }
    }
    else if (strcmp(operator, "/") == 0){
        if(aux2->iVal != 0 && aux->iVal != 0 ){
            if(aux->type == 1){
                sprintf(destino, "%d", aux->iVal / aux2->iVal);
            } else {
                sprintf(destino, "%.2f", aux->fVal / aux2->fVal);
            }
        }
         else printf("Não é possivel efetuar a operação de divisão\n");
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

void finalization(HashTable *H){
    for (int i = 0; i < TAM; i++) {
        struct cell *p = H->table[i];
        while (p != NULL) {
        struct cell *aux = p;
        p = p->prox;
        free(aux);
        }
    }

  // Desaloca o vetor de ponteiros da tabela hash
  free(H->table);

  // Desaloca a estrutura principal da tabela hash
  free(H);
}

void printHash(HashTable *H){
    struct cell *aux;
    int printed_names[MAX] = {0}; // Flag array to track printed names

    printf("----------------------------------------------------------------------------------\n");
    printf("|\tTOKEN\t\t\t|\tTipo\t|   Categoria   |\tValor\t| Linha(s)\n");
    printf("----------------------------------------------------------------------------------\n");
     for (int i = 0; i < TAM; i++){
        aux = H->table[i];
        while (aux != NULL){
            printf("| %-26s\t", aux->name);

            switch (aux->type){
            case 1:
               printf("| TYPE_INT\t|");
                break;
            case 2:
                printf("| TYPE_REAL\t|");
                break;
            case 3:
                printf("| TYPE_STR\t|"); 
                break;
            case 4:
                printf("| TYPE_UNDEF\t|"); 
                break;
            case 5:
                printf("| TYPE_KEYWORD\t|"); 
                break;
            case 6: 
                printf("| TYPE_CHAR\t|");
                break;
            case 7:
                printf("| TYPE_VOID\t|"); 
                break;        
            default:
                printf("           \t|");
                break;
            }
            switch (aux->category){
            case 8:
               printf("   NUMBERS\t|");
                break;
            case 9:
                printf("  VARIABLE\t|");
                break;
            case 10:
                printf("  DATA_TYPE\t|"); 
                break;
            case 11:
                printf("  CARACTER\t|"); 
                break;
            case 12:
                printf("  LIBRARIES\t|"); 
                break;
            case 13: 
                printf("  OPERATOR\t|");
                break;
            case 14:
                printf("  PARAMETER\t|"); 
                break;
            case 15:
                printf("  FUNCTION\t|"); 
                break;           
            default:
                printf("           \t|");
                break;
            }
            
            switch (aux->type){
            case 1:
                printf("%-10d\t|", aux->iVal);
                break;
            case 2:
                printf("%-10.2f\t|", aux->fVal);
            case 3: 
                printf("%-10s\t|", aux->cVal);
            default:
                 printf("           \t|");
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
    finalization(H);
}