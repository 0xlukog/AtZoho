// print bcd 8

#include <stdio.h>

void printEight(int n)
{

    for (int i = 1; i <= 2 * n - 1; i++)
    {

        for (int j = 1; j <= n; j++)
        {

            if (((j == 1 || j == n) && !(i == 1 || i == n || i == 2 * n - 1)) || (i == 1 || i == n || i == 2 * n - 1) && (j != 1 && j != n))
            {
                printf("* ");
            }

            // else if (i == 1 || i == n || i == 2 * n - 1)&&(j != 1 && j != n)
            // {
            //     if
            //     {
            //         printf("* ");
            //     }
            //     else
            //     {
            //         printf("  ");
            //     }
            // }

            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}

void main()
{

    int n;

    printf("Enter the number : ");

    scanf("%d", &n);

    printEight(n);
}