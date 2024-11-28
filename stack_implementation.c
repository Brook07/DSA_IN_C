#include<stdio.h>
#include<stdlib.h>

#define MAX 10

typedef struct Stack{
    int items[MAX];
    int top;
}Stack;

void initialize(Stack *s){
    s->top = -1;
}

int isFull(Stack* s){
    return s->top == MAX - 1;
}
int isEmpty(Stack *s){
    return s->top == -1;
}
 void push(Stack* s,int value){
    if (isFull(s)){
        printf("Stack Overflow!!\n");
    }else {
        s->items[++(s->top)] = value ;
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
 }