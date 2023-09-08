#include <stdio.h>
#define d 100
void printArray(int (*arr)[d], int row, int col)
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
void scanArray(int (*arr)[d], int row, int col)
{
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            printf("Enter (%d,%d) element", i, j);
            scanf("%d", &(*(arr + i))[j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int (*mat)[d], int row, int col)
{
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (i < j)
            {
                int t = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = t;
            }
        }
    }
}
void main()
{
    int mat[d][d];
    int row, col;
    printf("Enter row and col : ");
    scanf("%d %d", &row, &col);
    printf("\n");

    scanArray(mat, row, col);
    transposeMatrix(mat, row, col);
    printArray(mat, col, row);
}