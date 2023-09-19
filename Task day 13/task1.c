// 2d array rectangle at given index and sum of rectangle

#include <stdio.h>
#define SIZE 100

void scanMatrix(int (*arr)[SIZE], int row, int col) // scanning a 2d integer array
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\nEnter arr[%d][%d] value : ",i,j);
            scanf("%d", &(*(arr + i))[j]);
        }
    }
}

int printRectange(int (*arr)[SIZE], int StartI, int StartJ, int EndI, int EndJ) // printing the rectangele and returning the sum value
{
    int sum = 0;

    for (int i = StartI; i <= EndI; i++)
    {

        for (int j = StartJ; j <= EndJ; j++)
        {
            printf("%d ", arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }
    
    return sum;
}

void main()
{
    int row, col, startI, startJ, endI, endJ;
    int arr[100][100];

    printf("\nEnter the Row and Col size : ");
    scanf("%d %d", &row, &col);

    scanMatrix(arr, row, col);
    printf("\n");

    printf("\nEnter the start indices : ");
    scanf("%d %d", &startI, &startJ);

    printf("\nEnter the end indices : ");
    scanf("%d %d", &endI, &endJ);

    int sum = printRectange(arr, startI, startJ, endI, endJ);

    printf("\nThe sum of the rectangle is %d\n", sum);
}