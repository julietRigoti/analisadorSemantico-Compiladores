#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    struct node *left;
    struct node *right; 
    char *token;
}; 

struct node * insertNode(struct node *L, struct node *R, char *token);

void printTree(FILE *of, struct node* node);

#endif