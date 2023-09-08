#include <stdio.h>

void leftRotate(int *arr,int size)
{int t = arr[0];
for(int i=0;i<size;i++){
    arr[i]=arr[(i+7)%size];
}
arr[size-1] = t;
}

void main()
{
int size = 9;
int arr[] = {1,2,0,4,5,6,7,8,9};
leftRotate(arr,size);
for(int i=0;i<size;i++){
    printf("%d ",arr[(i)]);
}
}