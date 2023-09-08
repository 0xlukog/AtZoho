// find the largest element in an array

#include <stdio.h>

int findLargestElement(int *arr, int size)
{
    int max = arr[0];
    
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}


void main()

{
    int n;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        printf("\nEnter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
        printf("\n");

    }

    printf("\nThe largest Element is : %d\n", findLargestElement(arr, n));
}