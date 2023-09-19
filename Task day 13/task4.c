// print the diamond pattern

#include <stdio.h>

void printDiamond(int n)
{
    int num = 1;
    for (int i = 1, k = n, space = 0; i <= 2 * n; i++) // i for total loop count, k for second half loop, space for spcaing
    {
        int printer = num;
        for (int j = 1, l = k; l >= 0 && j <= i;)
        {
            if (i <= n)
            {
                if (space > n - i)
                {
                    printf("%d ", printer--);
                    j++;
                }
                else
                {
                    printf(" ");
                    space++;
                }
            }
            else
            {
                if (space >= n - k)
                {
                    printf("%d ", printer--);
                    l--;
                }
                else
                {
                    printf(" ");
                    space++;
                }
            }
        }
        printf("\n");
        if (i > n)
        {
            num -= k + 1;
            k--;
            printer = num;
        }
        else
        {
            num += i + 1;
            printer = num;
        }
        if (i == n)
        {
            num -= k-- + 1;
        }
        space = 0;
    }
}

void main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d", &n);

    printDiamond(n);
}
