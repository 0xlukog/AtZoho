// find the top three repeated numbers in an array

#include <stdio.h>

static int numSize = 0;

typedef struct // structure is used as an hashmap to map element to its frequency 
{
    int number;
    int count;
} numCount;

int checkAndAdd(numCount n[], int search) // function checks and adds the count if the element is available in the structure array
{
    for (int i = 0; i < numSize; i++)
    {
        if (n[i].number == search)
        {
            n[i].count++;
            return 1;
        }
    }
    return 0;
}

void scanArray(int arr[], int size) // getting and storing input to array
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter arr[%d] value : ", i);
        scanf("%d", &arr[i]);
    }
}

void sortStruct(numCount n[]) // sorting the structure array based of frequency of element
{
    for (int i = 0; i < numSize; i++)
    {
        for (int j = i + 1; j < numSize; j++)
        {
            if (n[i].count < n[j].count)
            {
                int tempNum = n[i].number;
                n[i].number = n[j].number;
                n[j].number = tempNum;

                int tempCount = n[i].count;
                n[i].count = n[j].count;
                n[j].count = tempCount;
            }
        }
    }
}

void findTop3(numCount n[], int arr[], int size) // finds the top 3 repeated element and prints it
{

    for (int i = 0; i < size; i++)
    {
        if (!checkAndAdd(n, arr[i]))
        {
            int newAdd = numSize++;
            n[newAdd].number = arr[i];
            n[newAdd].count = 1;
        }
    }

    sortStruct(n);

    int min = numSize < 3 ? numSize : 3; // finding if array is only has less than 3 unique elements

    printf("\nThe most repeated values are : \n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", n[i].number);
    }
}

void main()
{
    int size;
    int arr[100];
    numCount n[50];

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    scanArray(arr, size);

    findTop3(n, arr, size);
}