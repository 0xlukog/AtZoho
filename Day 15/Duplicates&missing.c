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
void MissRepeat(int *arr, int size)
{
    sortArray(arr, size);
    int count = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[count] != arr[i])
        {
            arr[++count] = arr[i];
        }
    }
    int cut = arr[0];
    int control = 0;
    for (int i = 1; i <= count;)
    {
        if (cut == arr[i] - 1)
        {
            cut = arr[i];
            i++;
        }
        else
        {
            printf("%d is missing\n", ++cut);
        }
    }
}
void main()
{
    int n = 5;
    int arr[] = {11, 11, 15, 13, 12};
    MissRepeat(arr, n);
}