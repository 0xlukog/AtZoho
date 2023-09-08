#include <stdio.h>
#include <stdbool.h>

void FindSumPairs(int *arr, int size, int target)
{
    bool found = false;
    if (size == 1) // checks if array size equals 1 and 1st element is the sum target
    {
        if (target == arr[0])
        {

            printf("%d\n", arr[0]);
        }
        else
        {

            printf("%d\n", -1);
        }
    }

    else // checks if size is more than 1
    {

        for (int i = 0; i < size - 1; i++) // loop to travers throughout the array
        {

            for (int j = i + 1; j < size; j++) // loop to traverse from next element of i to end of the array
            {

                int CurrSum = arr[i] + arr[j];
                if (CurrSum == target)
                {

                    printf("\n %d , %d\n", arr[i], arr[j]);
                    found = true; // records that any one valid pairs are printed
                }
            }
        }

        if (!found) // check if already any pairs are printed else print -1 as default
        {

            printf("-1,-1\n");
        }
    }
}

void getArray(int *arr, int size)
{
    if (size > 0)
    {

        for (int i = 0; i < size; i++)
        {

            printf("Enter the %d element :", i + 1);
            scanf("%d", &arr[i]);
            
        }

    }

    else // if size is zero or negative value 
    {
        printf("Enter a valid size !!!! \n\n");
    }
}
void main()
{

    int arr[50];
    int target, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("\n");

    getArray(arr, size); // scanning array from user

    printf("Enter the sum to search : ");
    scanf("%d", &target);

    FindSumPairs(arr, size, target); // checking sum pairs are exist in the array
}