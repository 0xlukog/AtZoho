#include <stdio.h>
void printDiamonnd(int n)
{
    int i = n, count = 0, flag = 0;
    while (count < n)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j <= n - i + 1 || j >= n + i - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        if (i > n && !flag)
        {
            count++, i++;
        }
        else
        {
            flag = 1, count++, i--;
        }
    }
}

void main()
{
    int n = 8;
    printDiamonnd(n);
}