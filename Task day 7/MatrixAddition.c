#include <stdio.h>
#define LIMIT 100


void addMatrix(int (*a)[LIMIT], int (*b)[LIMIT], int (*c)[LIMIT], int row, int col)
{
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            c[i][j] = a[i][j] + b[i][j];
            
        }
    }
}

void getMatrix(int (*mat)[LIMIT], int row, int col)
{

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            printf("Enter (%d,%d) element : ", i, j);
            scanf("%d", &(*(mat + i))[j]);

        }
    }
}

void printMatrix(int (*mat)[LIMIT], int row, int col)
{

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            printf("%d ", mat[i][j]);

        }
        printf("\n");
    }
}


void main()
{
    int a[LIMIT][LIMIT]; 
    int b[LIMIT][LIMIT];
    int c[LIMIT][LIMIT];
    int row, col;


    printf("Enter the row and column : ");
    scanf("%d %d", &row, &col);


    getMatrix(a, row, col);
    getMatrix(b, row, col);


    addMatrix(a, b, c, row, col);


    printMatrix(c, row, col);
}