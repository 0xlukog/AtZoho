// print binary triangle

#include <stdio.h>

void printBinaryTriangle(int n)
{

    int binary = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            binary = 0;
        }
        else
            binary = 1;
        for (int j = 1; j <= i; j++)
        {
            if (binary)
            {
                printf("%d", binary);
                binary = 0;
            }
            else
            {
                printf("%d", binary);
                binary = 1;
            }
        }

        printf("\n");
    }
}

void main()
{
    int n;

    printf("Enter the number of lines");

    scanf("%d", &n);

    printBinaryTriangle(n);
}