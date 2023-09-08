#include<stdio.h>
void main(){

    struct ListNode{
        int val;
        struct ListNode * next;
    };
    int n=4;
    struct ListNode * head = NULL;
    struct ListNode * temp = (struct ListNode *)malloc(sizeof(struct ListNode));
    for(int i=0;i<n;i++){
        int tempVal=0;
        struct ListNode * newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
        printf("Enter the node %d value",i+1);
        scanf("%d",&tempVal);
        if(head==NULL){ 
           temp->val = tempVal;
           head= temp;
           temp->next=NULL;
        }
        else{
            temp->next= newNode;
            newNode->val=tempVal;
            newNode->next=NULL;
            temp=newNode;
        }
    }
    while(head!=NULL){
        printf("%d ",head->val);
        head=head->next;
    }
}