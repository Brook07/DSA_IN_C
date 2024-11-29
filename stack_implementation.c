#include<stdio.h>
#include<stdlib.h>

//defining the max size of the arrary 
#define MAX 10

typedef struct Stack{
    int items[MAX];         //Array to hold the stack elements 
    int top;                //Index of the top element in the stack
}Stack;

//initialiazating the top 
void initialize(Stack *s){
    s->top = -1; //Sets the top to -1 indicating the stack is empty
}

//check if the stack is full 
//Returns 1 (true) if the stack is full (top reaches the maximum index MAX - 1), otherwise 0.
int isFull(Stack* s){
    return s->top == MAX - 1;
}
//

//check if the stack is empty 
int isEmpty(Stack *s){
    return s->top == -1;
}


 void push(Stack* s,int value){
    if (isFull(s)){
        printf("Stack Overflow!!\n");
    }else {
        s->items[++(s->top)] = value ;      //Increment the top and adds the value to the top
        printf("pushed %d onto the stack.\n", value);
    }
 }

 int pop(Stack* s){
        if(isEmpty(s)){
            printf("Stack UnderFlow.\n");
        return -1;
    }
        else{
            return s->items[(s->top)--];
        }
 }

 int peek(Stack* s){
    if( isEmpty(s)){
        printf("Stack is Empty!\n");
        return -1;
    }
    else{
        return s->items[s->top];
    }
 }

 void display(Stack* s){
    if (isEmpty(s)){
        printf("Stack is Empty!!!\n");
    }
    else{
        printf("Stack elements :");
        for(int i= 0;i <= s->top; i++){
            printf("%d", s->items[i]);
        }
        printf("\n");
    }
 }

 int main(){
    Stack s;
    initialize(&s);

    push(&s ,10);
    push(&s ,20);
    push(&s ,30);

    display(&s);
    printf("Popped :%d\n",pop(&s));
    printf("Top elements:%d\n", peek(&s));

    display(&s);
    
    return 0;
 }