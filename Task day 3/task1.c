// hollow square
#include <stdio.h>

void printHollowSquare(int n)
{
    
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {

            if (i == 1 || j == 1 || i == n || j == n)
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

    printf("Enter the size of Square : ");

    scanf("%d", &n);

    printHollowSquare(n);

}