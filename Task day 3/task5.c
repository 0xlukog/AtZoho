// print number triangle

#include <stdio.h>

void printNumberTriangle(int n)
{
    

    for (int i = 1; i <= n; i++)
    {
        int num = i;

        for (int j = 1; j <= n + i; j++)
        {
            if (j <= n - i + 1)
            {
                printf("  ");
            }
            else
            {
                if (j > n)
                {
                    printf("%d ", num);
                    num--;
                }
                else
                {
                    printf("%d ", num);
                    num++;
                }
            }
        }

        printf("\n");
    }
}

void main()
{
    int n;

    printf("Enter the number of lines : ");

    scanf("%d", &n);

    printNumberTriangle(n);

}