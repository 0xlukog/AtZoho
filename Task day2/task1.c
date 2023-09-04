// print a right angle triangle *
#include <stdio.h>
void printStarPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void main()
{
    int n;
    printf("Enter the number of *s : ");
    scanf("%d", &n);
    printStarPattern(n);
}