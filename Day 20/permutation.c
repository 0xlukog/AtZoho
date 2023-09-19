#include <stdio.h>

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void permutations(int arr[], int fi, int len)
{
    if (fi == len - 1)
    {
        printArray(arr, len);
    }
    else
    {
        for (int i = fi; i < len; i++)
        {
            swap(arr, i, fi);
            permutations(arr, fi + 1, len);
            swap(arr, i, fi);
        }
    }
}
void main()
{
    int arr[] = {1, 2, 3, 4,5};
    int len = 5;
    permutations(arr, 0, len);
}