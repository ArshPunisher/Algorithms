#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr){
    if(ptr->top == ptr->arr[ptr->size] -1){
        return -1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *ptr, int val){
    if(isFull(ptr)){
        printf("Stack is overslow !!\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Sorry stack is empty\n");
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp, int i){
    int arryInd = sp->top -i +1;
    if(arryInd < 0){
        printf("Error !!");
    }
    else{
        return sp->arr[arryInd];
    }
}

int main(){
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * (sizeof(int)));

    printf("After Checking Full or Not: %d\n", isFull(sp));
    printf("After Checking Empty or Not: %d\n", isEmpty(sp));
    push(sp, 31);
    push(sp, 31);
    push(sp, 77);
    push(sp, 13);
    push(sp, 56);
    push(sp, 19);
    push(sp, 99);
    push(sp, 49);
    push(sp, 38);
    push(sp, 51);
    push(sp, 93);
    push(sp, 73);
    printf("The %d Element has been poped\n", pop(sp));

    for(int j = 1; j <= sp->top +1; j++){
        printf("The element at position %d : %d\n", j, peek(sp, j));
    }
    return 0;
}