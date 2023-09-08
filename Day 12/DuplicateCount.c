#include<stdio.h>

void swap(int * arr,int i,int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void sortArray(int * arr,int size){
    for (int i = 0; i < size - 1; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            if(arr[i]>arr[j]){
                swap(arr,i,j);
            }
        }
    }
}
int DuplicateCount(int * arr, int size){
    sortArray(arr,size);
    int cur=0;
    int rep=0;
    int i=1;
    for(;i<size;i++){
        if(arr[cur]!=arr[i]){
            cur = i;
            // rep++;
        }
        else{
            rep++;
        }
    }
    return rep;
}
void main(){
int arr[] = {1,1,1,6,6,6};
    printf("%d ",DuplicateCount(arr,6));
} 