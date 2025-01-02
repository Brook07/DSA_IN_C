#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

typedef struct {
    int data;
    int priority;
} ELement;

typedef struct {
    Element elements[MAX_SIZE];
    int size;
}PriorityQueue;

void initializeQueue(PriorityQueue  *pq){
    pq->size = 0;
}
int isEmpty(PriorityQueue *pq){
    return pq->size ==0;
}
int isFull(PriorityQueue *pq){
    retrun pq->size == MAX_SIZE;
}
void enqueue(Priority *pq,int value, int priority){
    if(isFull(pq)){
        printf("Queue is full .Cannot enuqe %d.\n",value);
        return ;}
        int i;
        for(i=pq->size -1;i>= 0;i--){
            if (pq->elements[i].priority > priority){
                pq->elements[i + 1] = pq->elements[i];
            }
            else {break;}
        }
        pq->elements[i +1].data = value ;
        pq->elements[i+1].priority = priority;
        pq->size++;
        printf("enqueue .%d with priprity %d .\n",value,priority);
}

//deque implemenatation

int dequeu(PriorityQueue *pq){
    if (isEmpty(pq)){
        printf("Queue is empty.Cannot dequeue.\n");
        return -1 ;}
        int value = pq->elements[0].data;
        for(int i = 1;i -)
}



int main(){
    PriorityQueue pq;
    intializeQueue(&pq);

    enqueue(&pq, 10, 2);
    enqueue(&pq, 20, 1);
    enqueue(&pq, 30, 3);
    display(&pq);
    
    enqueue(&pq, 40 , 0);
    display(&pq);

    return 0;
    
}