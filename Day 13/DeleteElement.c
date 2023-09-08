#include <stdio.h>

void function(int *arr, int n, int pos)
{
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
}
void main()
{
    int arr[20];
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int remove = 3;
    function(arr, n, remove);
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);}
}