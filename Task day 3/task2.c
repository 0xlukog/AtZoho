// print Cross 

#include <stdio.h>

void printCross(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {

            if (i == j || i + j == n + 1)
            {
                printf("* ");
            }

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

    printf("Enter the length : ");

    scanf("%d", &n);

    printCross(n);

}