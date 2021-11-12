#include<stdio.h>
#include<stdlib.h>

struct circularQueue{
    int size;
    int r;
    int f;
    int *arr;
};

int isEmpty(struct circularQueue *q){
    if(q->r == q->f){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct circularQueue *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct circularQueue *q, int val){
    if(isFull(q)){
        printf("Queue is full\n");
    }
    else{
        q->r = (q->r+1) % q->size;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct circularQueue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("ERROR !! Queue is Empty\n");
    }
    else{
        q->f = (q->f +1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main(){
    struct circularQueue q;
    q.size = 4;
    q.r = q.f = 0;
    q.arr = (int*) malloc(q.size* sizeof(int));

    enqueue(&q, 22);
    enqueue(&q, 44);
    enqueue(&q, 52);
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    enqueue(&q, 41);
    enqueue(&q, 96);
    enqueue(&q, 36);
    enqueue(&q, 62);

    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
    return 0;
}