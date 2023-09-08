// count duplicate elements in an array

#include <stdio.h>

void sortArray(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}

void countDuplicates(int *arr, int size)
{
    sortArray(arr, size);
    int cur = arr[0];
    int count = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != cur)
        {
            printf("%d repeated %d times\n\n", cur, count);
            cur = arr[i];
            count = 1;
        }
        else if (i == size - 1 && count != 1)
        {
            printf("%d repeated %d times\n\n", cur, count + 1);
            count = 1;
        }
        else
        {
            count++;
        }
    }
}

void main()
{
    int n;

    printf("\nEnter the size of array : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        printf("\nEnter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    countDuplicates(arr, n);
}