#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;

int main(){
    Node *n1 = malloc(sizeof(Node));
    Node *n2 = malloc(sizeof(Node));
    Node *n3 = malloc(sizeof(Node));
    n1->data = 1;
    n2->data = 3;
    n3->data = 4;
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;
    Node *t;
    t = n1;
    while(t != NULL){
        printf("%d",t->data);
        t = t->next;
    }
    printf("\n");
    Node *new = malloc(sizeof(Node));
    new->data = 2;
    new->next = n1->next;
    n1->next = new;
    Node *temp;
    temp = n1;
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
    free(n1);
    free(n2);
    free(n3);
    free(new);
    return 0;
}