#include<stdio.h>
#include<stdbool.h>
#define MAX 5
int front=0, rear = -1, A[MAX];
 
bool isfull(){
    return rear == MAX - 1;
}

bool isempty(){
    return front > rear ;
}

int enqueue(int data){
    if(!isfull()){
        rear++;
        A[rear] = data ;
        return data;
    }else{
        printf("Queue is full!");
        return -1;
    }
}

int dequeue(){
    if(!isempty()){
        int data = A[front];
        front++;
        return data;
    }else{
        printf("Queue is Empty!");
        return -1;
    }
}

//main function 

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    printf("Front Elements in the queue is : %d\n",A[front]);
    printf("Front Elements in the queue is : %d\n",A[rear]);
    
    printf("Elements in the Queue are :\n");

    while(!isempty()){
        printf("%d\n",dequeue());
    }
}