#include<stdio.h>
#include<stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node{
    int data;
    struct Node *next;
};


void linkedTraversal(struct Node *ptr){

    while(ptr!=NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val){
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));    

    if(n==NULL){
        printf("Queue is full\n");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next = n;
            r = n;
        }
    }
}

int main(){

    enqueue(33);
    enqueue(56);
    enqueue(37);
    linkedTraversal(f);

    return 0;
}