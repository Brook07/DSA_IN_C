#include<stdio.h>
#include<stdlib.h>

#define MAX 5

typedef struct Queue{
    int items[MAX];
    int front ,rear;
}Queue;

void initialize(Queue* q){
    q->front = -1;
    q->rear = -1;
}

int isFull(Queue* q){
    return q->rear == MAX - 1;
}

int isEmpty(Queue* q){
    return q->front == -1;
}

void enqueue(Queue* q,int value){
    if(isFull(q)){
        printf("Queue OverFlow! Cannot enqueue %d\n",value);
    }else{
        if(q->front == -1){
            q->front = 0;
            }
            q->rear++;
            q->items[q->rear] = value;
            printf("Enqueued %d to the queue.\n",value);
        }
    }

int dequeue(Queue* q){
    if(isEmpty(q)){
        printf("Queue UnderFlow! Cannot Deque.\n");
        return -1;
    }
    else{
        int value = q->items[q->front];
        if(q->front == q->rear){
            q->front = q->rear - 1;
        }else{
            q->front++;
        }
        return value;
    }
}

void display(Queue* q){
    if(isEmpty(q)){
        printf("Queue is Empty.\n");
    }else{
        printf("Queue elements:");
        for(int i= q->front; i <= q->rear; i++){
            printf("%d", q->items[i]);
        }
        printf("\n");
    }
}


//main function

int main(){
    Queue q;

    initialize(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q ,30);
    enqueue(&q ,40);
    enqueue(&q, 50);

    display(&q);

    printf("Dequequed: %d\n",dequeue(&q));
    printf("Dequequed: %d\n",dequeue(&q));

    display(&q);

    enqueue(&q, 60);
    display(&q);

    return 0;
}