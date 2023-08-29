#include <stdio.h>
struct node{
    int data;
    struct node *next;
};
void main(){
    int data=0;
    int llcount=0;
    struct node* head;
    struct node* first;
    head = malloc(sizeof(struct node));
    first = malloc(sizeof(struct node));
    head->data=0;

    
    while(data!=20){
        struct node* temp = malloc(sizeof(struct node));
        data+=1;
    if(head->data == 0){
        head->data = data;
        head->next=first;
    }
    else{
        first->data=data;
        first->next=temp;
        temp->next=NULL;
        first=temp;
    }
    }   
    struct node* looper = head;
    while(looper!=NULL){
        printf("%d",looper->data);
        looper=looper->next;
        if(looper==NULL)
        break;
    }
}