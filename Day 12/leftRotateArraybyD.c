#include <stdio.h>
void reverse(int *arr, int start, int end){
    for(int i=start,j=end;i<=j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
void leftRotate(int *arr,int size,int rotate)
{
    reverse(arr,0,rotate-1);
    reverse(arr,rotate,size-1);
    reverse(arr,0,size-1);
}

void main()
{
int size = 9;
int arr[] = {1,2,3,4,5,6,7,8,9};
int rotate = 6;
leftRotate(arr,size,rotate);
for(int i=0;i<size;i++){
    printf("%d ",arr[(i)]);
}
}