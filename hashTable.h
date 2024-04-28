#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 127 // para tabela hash
#define MAX 100 // para vetor de char

struct cell {
    char name[MAX];
    int lineno;
    int len;
    struct cell *prox;
};

typedef struct {
    struct cell **table;
} HashTable;

// Função para inicializar uma nova tabela hash
// Pré-condição: Nenhuma
// Pós-condição: Retorna um ponteiro para uma struct HashTable recém-alocada
//                ou NULL em caso de falha na alocação de memória.
HashTable *initialization();

// Função para calcular o valor hash de uma string
// Pré-condição: A string de entrada (`name`) deve ser terminada em null.
// Pós-condição: Retorna o valor hash (índice) para a string dentro do intervalo da tabela hash (0 a TAM-1).
int hash(char *name); 

// Função para buscar um token (nome) na tabela hash
// Pré-condição: 
//   - `aux`: Ponteiro válido para o início de uma lista ligada (célula) dentro da tabela hash.
//   - `name`: Ponteiro válido para uma string terminada em null.
// Pós-condição: Retorna o índice do bucket onde o token foi encontrado 
//                ou -1 se não for encontrado.
int SearchToken(struct cell *aux, char *name) ;

// Função para inserir um token (nome) na tabela hash
// Pré-condição: 
//   - `h`: Ponteiro válido para uma struct HashTable.
//   - `name`: Ponteiro válido para uma string terminada em null.
//   - `len`: Comprimento da string (`name`).
//   - `line`: Número da linha onde o token foi encontrado.
// Pós-condição: Insere o token na tabela hash. 
//                - Se for encontrada uma duplicata, uma nova célula com o número de linha atualizado 
//                  é anexada à lista ligada no índice correspondente.
//                - Se for um novo token, uma nova célula é criada e inserida no início da lista ligada.
void inserts(HashTable *h, char *name, int line, int len);

// Função para mostrar a tabela Hash no Terminal
// Pré-condição:
//     - `H`: Ponteiro válido para uma struct HashTable. 
// Pós-condição: O conteúdo da tabela é mostrada no Terminal
void printHash(HashTable *H);

#endif