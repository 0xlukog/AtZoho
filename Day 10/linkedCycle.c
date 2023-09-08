#include<stdio.h>
#include<stdbool.h>
static bool visited[10000];
 struct ListNode {
      int val;
      struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
    int t=10;
    long sum=0;
    long headAddress = (long)head;
    for(int i=0;i<10000;i++){
        visited[i]=false;
    }
    while(head!=NULL){
        printf("%lld - - %lld == %lld\n",(long long)head,headAddress,((long long)head-headAddress));
        head=head->next;
    }

}

void main(){
    struct ListNode * one =(struct ListNode *) malloc(sizeof(struct ListNode));
    struct ListNode * two =(struct ListNode *) malloc(sizeof(struct ListNode));
    struct ListNode * three =(struct ListNode *) malloc(sizeof(struct ListNode));
    struct ListNode * four =(struct ListNode *) malloc(sizeof(struct ListNode));

    one->val=3;
    one->next=two;
    two->val=2;
    two->next=three;
    three->val=0;
    three->next=four;
    four->val=-4;
    four->next=NULL;
    printf("%d",hasCycle(one));
}