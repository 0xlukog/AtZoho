#include<stdio.h>
void changeNum(int * arr,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            arr[i]=-1;
        }
    }
}
void main(){
    int n;
    int arr[100];
    int i=0;
    int size=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0){
        arr[i++]=n%10;
        n=n/10;
        size++;
    }
    changeNum(arr,size);
    for(int i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}