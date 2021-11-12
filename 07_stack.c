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

int main(){
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * (sizeof(int)));

    printf("After Checking Full or Not: %d\n", isFull(sp));
    printf("After Checking Empty or Not: %d\n", isEmpty(sp));
    push(sp, 33);
    push(sp, 53);
    push(sp, 35);
    push(sp, 323);
    push(sp, 353);
    printf("The %d Element has been poped\n", pop(sp));
    return 0;
}