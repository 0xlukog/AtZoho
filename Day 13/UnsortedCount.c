#include<stdio.h>

void function(int *arr,int n){
int dummy = __INT_MAX__;
for(int i=0;i<n-1;i++){
    int count =1;
  for(int j=i+1;j<n;j++){
    if(arr[i]==arr[j] && arr[i]!=dummy){
        count++;
        arr[j]=dummy;
    }
  }if(arr[i]!=dummy&& count!=1)printf("%d rep %d \n",arr[i],count);
    arr[i]=dummy;
}
}
void main(){
int arr[]={1,1,1,3,3,2,2,5,6,1};
int n =10;
function(arr,n);
}