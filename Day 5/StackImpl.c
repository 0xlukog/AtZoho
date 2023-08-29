
#include<stdio.h>
#include<stdbool.h>
#define SIZE 50
int stack[SIZE];
int top=-1;
void push(int n){
    if(top==99){
        printf("Stack is full..\n\n");
    }
    else{
        top++;
        stack[top]=n;
    }
}
int pop(){
    if(top==-1){
        printf("Stack is empty");
        return -1;
    }
    else{
        return stack[top--];
    }
}
bool isEmpty(){
    if(top==-1)
        return true;
    else    
        return false;
}
bool isFull(){
    if(top==SIZE-1)
        return true;
    else    
        return false;
}

void dispStack(){
    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
}

void main(){
    
    int n = 100;
    int c = 0;
    while(n--){
        printf("\n\n 1. pop\n2. push\n 3.display stack");
        scanf("%d",&c);
        if(c==1){
            printf("%d",pop());
        }
        else if(c==2){
            int temp;
            printf("Enter element to push");
            scanf("%d",&temp);
            push(temp);
        }
        else if(c == 3){
            dispStack();
        }
    }
}