#include<stdio.h>
 struct ListNode {
   int val;    
   struct ListNode *next;
};
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if(list1==NULL){
        return list2;
        }
    if(list2==NULL){
        return list1;
        }
    struct ListNode* head=(struct ListNode*)malloc(sizeof(struct ListNode));
    head->val=0;
    struct ListNode* returnNode=(struct ListNode*)malloc(sizeof(struct ListNode));
    while(list1!=NULL || list2!=NULL){
        struct ListNode* temp =(struct ListNode*)malloc(sizeof(struct ListNode));
        struct ListNode* temp1 =(struct ListNode*)malloc(sizeof(struct ListNode));
        if(list1==NULL){
            returnNode->val=list2->val;
            list2=list2->next;
            // returnNode->next=NULL;
        }
        else if(list2==NULL){
            returnNode->val=list1->val;
            list1=list1->next;
            // returnNode->next=NULL;//
        }

        else if(head->val==0){
            if(list1->val<=list2->val){
                if(list1->val==list2->val){
                    head->val=list1->val;
                    head->next=temp;
                    temp->val=list2->val;
                    temp->next=returnNode;
                    returnNode->next=NULL;
                    list1=list1->next;
                    list2=list2->next;
                }
            else if(list1->val<list2->val){
                head->val=list1->val;
                head->next=returnNode;
                list1=list1->next;
                returnNode->next=NULL;
            }

        }
        else{
            head->val=list2->val;
            head->next=temp;
            list2=list2->next;
            temp->next=NULL;
        }
        }
        else{
            if(list1->val<=list2->val){
            if(list1->val==list2->val){
                returnNode->val=list1->val;
                returnNode->next=temp;
                temp->val=list2->val;
                temp->next=NULL;
                returnNode=temp1;
                list1=list1->next;
                list2=list2->next;
                returnNode->next=NULL;
            }
            else{
                returnNode->val=list1->val;
                returnNode->next=temp;
                returnNode=temp;
                list1=list1->next;
                    returnNode->next=NULL;
            }

        }
        else{
            returnNode->val=list2->val;
            list2=list2->next;
            returnNode->next=temp;
            returnNode=temp;
            
        }
        }
}
return head;
}
void main(){
    struct ListNode* list1=0;
    struct ListNode* list2=0;
    struct ListNode* one = malloc(sizeof(struct ListNode));
    struct ListNode* two = malloc(sizeof(struct ListNode));
    struct ListNode* three = malloc(sizeof(struct ListNode));
    struct ListNode* one1 = malloc(sizeof(struct ListNode));
    struct ListNode* two1 = malloc(sizeof(struct ListNode));
    struct ListNode* three1= malloc(sizeof(struct ListNode));
    one->val=2;
    one->next=NULL;
    two->val=2;
    two->next=three;
    three->val=4;
    three->next=NULL;
    list1=one;

    one1->val=1;
    one1->next=NULL;
    two1->val=3;
    two1->next=three1;
    three1->val=4;
    three1->next=NULL;
    list2=one1;
    struct ListNode* result = mergeTwoLists(list1,list2);
    while(result!=NULL){
        printf("%d",result->val);
        result=result->next;
    }
}