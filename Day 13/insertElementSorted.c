#include <stdio.h>

void function(int *arr, int length, int insertVal)
{
    // int retArray[length+1];
    int pos = 0;
    for (int i = 0; i < length; i++)
    {
        if (insertVal < arr[i])
        {
            pos = i;
            break;
        }
    }
    // retArray[pos]=insertVal;
    // for(int i=0;i<length+1;i++){
    //     if(i<pos)retArray[i]=arr[i];
    //     else if(i>pos) retArray[i]=arr[i-1];
    // }

    // for(int i=0;i<length+1;i++){
    //     printf("%d ",retArray[i]);
    // }
    for (int i = length - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = insertVal;
}
void main()
{
    int arr[200];
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ins = 8;
    function(arr, n, ins);
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
}