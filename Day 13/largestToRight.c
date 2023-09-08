#include<stdio.h>
void printArray(int *arr, int length)
{
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
    }
}
void function(int * arr ,int length){
for(int i=0;i<length-1;i++){
    int max = arr[i+1];
  for(int j=i+1;j<length;j++){
    if(arr[j]>max)
    {
        max = arr[j];
    }
  }
  arr[i]=max;

}
printArray(arr,length);
}
void main(){
int arr[]={7,5,8,9,6,8,5,7,4,6};
int n =10;
function(arr,n);
}