#include <stdio.h>

void printTriangle(int n)
{
    int num = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            printf("%d ", num++);

        }

        printf("\n");

    }

}

int main()
{
    int n;

    printf("Enter the number of lines : ");

    scanf("%d", &n);

    printTriangle(n);

}
