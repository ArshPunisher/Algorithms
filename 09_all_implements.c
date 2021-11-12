#include<stdio.h>
#include<stdlib.h>

struct  Node{
    int data;
    struct Node * next;
};

void display(struct Node *top){
    struct Node *ptr = top;
    while(ptr!=NULL){
        printf("Element %d:\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *top){
    if(top == NULL){
        printf("Stack is empty\n");
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct Node *top){
    struct Node *p = (struct Node*) malloc(sizeof(struct Node));
    if(p == NULL){
        printf("Stack Overflow !!\n");
    }
    else{
        return 0;
    }
}

struct Node *push(struct Node *top, int val){
    
    if(isFull(top)){
        printf("Stack is full... You cant be pushed\n");
    }
    else{
        struct Node *p = (struct Node*) malloc(sizeof(struct Node));
        p->data = val;
        p->next = top;
        top = p;
        return top;
    }
};

int main(){
    struct Node *top = NULL;
    top = push(top, 52);
    top = push(top, 34);
    top = push(top, 98);

    display(top);
    return 0;
}