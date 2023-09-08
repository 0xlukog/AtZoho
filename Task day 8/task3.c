// move 0 to end
#include <stdio.h>

// void moveZerosToEnd(int arr[], int size)
// {

//     for (int i = 0; i < size; i++)
//     {

//         for (int j = i + 1; j < size; j++)
//         {

//             if (arr[i] == 0 && arr[j] != 0)
//             {

//                 arr[i] = arr[j];
//                 arr[j] = 0;

//             }
//         }
//     }
// }
void moveZerosToEnd(int arr[], int size)
{
    int i = 0, j = 1;
    while (i < size && j < size)
    {
        if (arr[i] == 0)
        {
            if (arr[j] != 0)
            {
                arr[i] = arr[j];
                arr[j] = 0;
            }
            else
            {
                j++;
            }
        }
        else
        {
            i++;
        }
    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        printf("%d ", arr[i]);
    }
}
void getArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        scanf("%d", &arr[i]);
    }
}
void main()
{
    int arr[50];
    int size;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    getArray(arr, size);
    moveZerosToEnd(arr, size);
    printArray(arr, size);
}