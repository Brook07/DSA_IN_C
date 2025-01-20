#include<stdio.h>
int stack[5], MaxSize = 5, top = -1 ;

int isempty(){
    if(top == -1)
    return 1;
    else
    return 0;
}

int isfull(){
    if(top == MaxSize - 1)
    return 1;
    else 
    return 0;
}

void push(int data){
    if(!isfull()){
        top = top + 1;
        stack[top] = data;
    }
    else{
        printf("Stack is Full!");
         return -1;
    }
}

int  peek(){
        return stack[top];
    }

int pop(){
    int data;
    if(!isempty()){
        data = stack[top];
        top = top - 1;
        return data;
    }
    else{
        printf("Stack is  Empty!");
         return -1;
    }
}

int main(){
    push(0);
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    printf("Elements at the top of the stack : %d\n",peek());
    printf("Elements in the stack:\n");

    while(!isempty()){
        int data = pop();
        printf("%d \n",data);
    }

    printf("Stack Full : %s\n ",isfull()?"true":"false");
    printf("Stack Empty : %s\n", isempty()?"true":"false");

    return 0;
}