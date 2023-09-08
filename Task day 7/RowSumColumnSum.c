#include <stdio.h>


void RowColumnSum(int arr[10][10], int n, int m)
{
    
    static int sum[2][10];
    
    
    for (int i = 0; i < n; i++)
    {
        int sum1 = 0;
        for (int j = 0; j < m; j++)
        {
            sum[0][j] += arr[i][j];

            sum1 += arr[i][j];
        }
        sum[1][i] = sum1;
    }


    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < m; j++)
        {

            if (i == 0)
            {
                printf("column %d sum is %d\n", j + 1, sum[i][j]);
            }
            else
            {
                printf("Row %d sum is %d\n", j + 1, sum[i][j]);
            }

        }

    }

}

void main()
{
    int arr[10][10];
    int n, m;

    printf("Enter the Order of Matrix");
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            printf("\nEnter a[%d][%d] element : ");
            scanf("%d", &arr[i][j]);

        }
    }
    
    RowColumnSum(arr, n, m);
}