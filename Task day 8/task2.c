//Rotate an array clockwise
#include <stdio.h>
#define L 100

void scan2dArray(int (*arr)[L], int row, int col)
{
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            scanf("%d", &(*(arr + i))[j]);
        }
    }
}


void print2dArray(int (*arr)[L], int row, int col)
{
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void rotate2dArray(int (*arr)[L], int (*rotated)[L], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0, l = col - 1; j < col && l >= 0; j++, l--)
        {
            rotated[i][j] = arr[l][i];
        }
    }
}


void main()
{
    int arr[L][L];
    int row, col;
    int rotatedArray[L][L];


    printf("Enter row and col : ");
    scanf("%d %d", &row, &col);

    scan2dArray(arr, row, col);
    rotate2dArray(arr, rotatedArray, row, col);
    print2dArray(rotatedArray,row,col);
}