#include<stdio.h>
#include<stdlib.h>

//defining the the max size of the queue
#define MAX 5

//defining queue structure with an array for storage and two pointer :front and rear
typedef struct Queue{
    int items[MAX];     //array for storing queue elements 
    int front ,rear;    //Ponter for tracking the front and rear of the queue
}Queue;

//Initialize the queue to an empty state
void initialize(Queue* q){
    q->front = -1;  //Set front pointer to -1,indicating the pointer is empty
    q->rear = -1;   //Set rear pointer to -1,indicating no elements in the queue 
}

//function for checking if the queue is empty
int isFull(Queue* q){
    return q->rear == MAX - 1;
}
 //check if the queue is full 
int isEmpty(Queue* q){
    return q->front == -1;
}

//Add an elements to the queue 
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

//remove and return the front elements from the queue
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

//Display the all elements in the queue
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
    Queue q;    //declare a queue

    initialize(&q);     //initialize the queue

    //perform enqueue operations
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q ,30);
    enqueue(&q ,40);
    enqueue(&q, 50);

    display(&q);

    //Perform dequeue operations
    printf("Dequequed: %d\n",dequeue(&q));
    printf("Dequequed: %d\n",dequeue(&q));

    display(&q);

    enqueue(&q, 60);
    display(&q);

    return 0;
}