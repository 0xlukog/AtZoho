#include<stdio.h>
 struct ListNode {
   int val;    
   struct ListNode *next;
};
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *temp,*head;
    head=0;
    while(list1!=NULL || list2!=NULL){
    //    if(head->val==0){
    //     if(list1->val<list2->val){
    //         head->val=list1->val;
    //         if(list1->next!=NULL){
    //             list1=list1->next;
    //         }
    //     }
    //     else{
    //         head->val=list2->val;
    //         if(list2->next!=NULL){
    //             list2=list2->next;
    //         }
    //     }
    //     head->next=returnNode;
    //    }
    //     else{
    //     struct ListNode* temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    //     if(list1->val<=list2->val){
    //         returnNode->val = list1->val;
    //         temp->next=NULL;
    //         returnNode->next=temp;
    //        if(list1->next!=NULL){
    //             list1=list1->next;
    //         }

    //     }
    //     else{
    //         returnNode->val = list2->val;
    //         temp->next=NULL;
    //         returnNode->next=temp;
    //        if(list2->next!=NULL){
    //             list2=list2->next;
    //         }
    //     }
    //     returnNode=temp;
    //     if(list1->next == NULL && list2->next == NULL){
    //         break;
    //     }
    //    }
    // }
    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
    if(list1==0){
        newnode->val=list2->val;
        list2=list2->next;
        newnode->next=NULL;
    }
    else if(list2==0){
        newnode->val=list1->val;
        list1=list1->next;
        newnode->next=NULL;
    }
    else if(list1->val<=list2->val){
        newnode->val-list1->val;
        list1=list1->next;
        newnode->next=NULL;
    }
    else if(list1->val>list2->val){
        newnode->val-list2->val;
        list2=list2->next;
        newnode->next=NULL;
    }if(head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    }
    return head;
}
// struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
//     if(list1->val > list2->val){
//         mergeTwoLists(list2,list1);
//     }
//     while(list1!=NULL){
//         if(list1->val <= list2->val && list1->next->val>= list2->val){
//             if(list1->next->val!==NULL){
//                     if(list1->next->val>=list2->val){
//                         join(list1,list2);
//                     }
//             }
//         }
//         list1=list1->next;
//         list2=list2->next;
//     }
//     return list1;
// }
// void join(struct ListNode* node1,struct ListNode* node2){
//     struct ListNode* temp;
//     if(node2->next!=NULL){
//     }
//     node2->next=node1->next;
//     node1->next=temp->next;
// }
void main(){

}