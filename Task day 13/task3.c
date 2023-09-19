#include <stdio.h>

void swap(int arr[], int i, int j) // swaps 2 element in an array
{
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}
void sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr, i, j);
            }
        }
    }
}
int * reArange(int arr[], int size) // rearranges the array
{
    int *retArray = malloc(sizeof(int)*size);
    sort(arr, size);
    int oddIndex=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==1){
            retArray[oddIndex++]=arr[i];
        }
    }
    for(int i=size-1;i>=0;i--){
        if(arr[i]%2==0){
            retArray[oddIndex++]=arr[i];
        }
    }
    return retArray;
}

void scanArray(int arr[], int size) // getting input and storing it in the array
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter a[%d] element : ", i);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) // printing the array
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void main()
{
    int size;
    int arr[50];

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    scanArray(arr, size);
    int *result = reArange(arr, size);
    printArray(result, size);
}