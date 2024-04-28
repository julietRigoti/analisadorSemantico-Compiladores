#include "tree.h"

struct node *insertNode(struct node *L, struct node *R, char *token){
    struct node *r = (struct node*) malloc (sizeof(struct node));
    char *str = (char *) malloc (sizeof(char));
    strcpy(str, token);
    r->left = L; 
    r->right = R; 
    r->token = str;
    return(r); 
}

void printAux(FILE* of, struct node* node, int n, int child){
    int i;
    for(i = 0; i < n; i++){
        if(i == n-1 && child == 0){
            fprintf(of, " \u251c");
        }
        else if(i == n-1 && child == 1){
            fprintf(of, " \u2515");
        }
        else{
            fprintf(of, " | ");
        }
    }

    fprintf(of,"%s\n", node->token);

    if(node->left != NULL)
        printAux(of, node->left, n+1, 0);
    if(node->right != NULL)
        printAux(of, node->right, n+1, 1);
}

void printTree(FILE* of, struct node* node){
    fprintf(of,"| | | ARVORE SINTATICA | | |\n");
    printAux(of, node, 0, 0);
}
