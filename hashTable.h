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
    int iVal; //variavel para quando for inteiro 
    float fVal;//variavel para quando for float/double
    char cVal[MAX]; //usar tanto para char quanto para string 
    int value; //variavel para guardar valores de expressão ou variavel
    int type; //para guardar se é inteiro/float/char
    int category;
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

// Função: getValue
// Descrição: Recupera um valor da tabela hash com base no nome fornecido e o operador especificado.
// Pré-condição: A tabela hash 'h' deve estar inicializada e o ponteiro 'name' deve ser uma string válida e não nula. O operador 'op' deve ser uma string válida.
// Pós-condição: O valor associado ao 'name' na tabela hash 'h' é recuperado e processado de acordo com o operador 'op'.
void getValue(HashTable *h, char *name, char *op);

// Função: calculateTest
// Descrição: Calcula um valor a partir de dois valores na tabela hash com base nos nomes fornecidos e o operador especificado.
// Pré-condição: A tabela hash 'h' deve estar inicializada. Os ponteiros 'name' e 'name2' devem ser strings válidas e não nulas. O operador 'operator' deve ser uma string válida e representando uma operação válida (e.g., "+", "-", "*", "/").
// Pós-condição: Retorna o resultado da operação entre os valores associados aos nomes 'name' e 'name2' na tabela hash 'h'.

void calculateTest(HashTable *h, char *name, char *name2, char* operator, char *destino);

// Função: SearchParser
// Descrição: Busca uma célula na tabela hash com base no nome fornecido.
// Pré-condição: A tabela hash 'h' deve estar inicializada e o ponteiro 'name' deve ser uma string válida e não nula.
// Pós-condição: Retorna um ponteiro para a célula encontrada que corresponde ao 'name' ou NULL se não for encontrada.
struct cell *SearchParser(HashTable *h, char *name);

// Função: setType
// Descrição: Define o tipo de um item na tabela hash com base no nome fornecido.
// Pré-condição: A tabela hash 'h' deve estar inicializada. O ponteiro 'name' deve ser uma string válida e não nula. 'type' deve ser um valor inteiro representando o tipo desejado.
// Pós-condição: O tipo do item associado ao 'name' na tabela hash 'h' é atualizado para o valor especificado por 'type'.
void setType(HashTable *h, char *name, int type);

// Função: setCategory
// Descrição: Define a categoria de um item na tabela hash com base no nome fornecido.
// Pré-condição: A tabela hash 'h' deve estar inicializada. O ponteiro 'name' deve ser uma string válida e não nula. 'cat' deve ser um valor inteiro representando a categoria desejada.
// Pós-condição: A categoria do item associado ao 'name' na tabela hash 'h' é atualizada para o valor especificado por 'cat'.
void setCategory(HashTable *h, char *name, int cat);

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
void inserts(HashTable *h, char *name, int len, int line, int type, int cat);

// Função para mostrar a tabela Hash no Terminal
// Pré-condição:
//     - `H`: Ponteiro válido para uma struct HashTable. 
// Pós-condição: O conteúdo da tabela é mostrada no Terminal
void printHash(HashTable *H);

#endif