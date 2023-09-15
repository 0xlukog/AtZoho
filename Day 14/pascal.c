#include <stdio.h>

int pascal(int i, int j)
{
    if (i == j || j == 0)
        return 1;
    else
        return (pascal(i - 1, j) + pascal(i - 1, j - 1));
}
void main()
{
    int n = 8;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0, s = i; j <= i;)
        {
            if (s < n)
            {
                printf(" ");
                s++;
            }
            else
            {
                printf("%d ", pascal(i, j));
                j++;
            }
        }
        printf("\n");
    }
}
