#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int r;
    int f;
    int *arr;
};

int isEmpty(struct queue *q){
    if(q->r == q->f){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("Queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("ERROR !! Queue is Empty\n");
    }
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main(){
    struct queue q;
    q.size = 6;
    q.r = q.f = -1;
    q.arr = (int*) malloc(q.size* sizeof(int));

    enqueue(&q, 22);
    enqueue(&q, 44);
    enqueue(&q, 52);
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
    return 0;
}