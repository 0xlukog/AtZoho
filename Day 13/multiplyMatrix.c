#include <stdio.h>
#define N 100

void scan2dArray(int (*arr)[N], int row, int col)
{
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("Enter %d %d value : ", i, j);
            scanf("%d", &(*(arr + i))[j]);
        }
    }
}
void print2dArray(int (*arr)[N], int row, int col)
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
void MultiplyMatrix(int (*a)[N], int (*b)[N], int (*mul)[N], int row, int col, int rowb, int colb)
{
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < colb; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < rowb; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
void main()
{
    int a[N][N];
    int b[N][N];
    int mul[N][N];
    int row, col, rowb, colb;

    printf("Enter Row and Col for A: ");
    scanf("%d %d", &row, &col);

    printf("Enter Row and Col for B: ");
    scanf("%d %d", &rowb, &colb);

    scan2dArray(a, row, col);
    scan2dArray(b, rowb, colb);

    MultiplyMatrix(a, b, mul, row, col, rowb, colb);

    print2dArray(mul, col, rowb);
}