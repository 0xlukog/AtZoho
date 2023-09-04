// diamond printing
void printDiamond(int n)
{
    for (int i = 1, k = n - 1; i <= 2 * n; i++)
    {

        for (int j = 1, l = 1; j <= n + i && l <= n + k; j++)
        {

            if (i <= n)
            {

                if (j <= n - i + 1)
                {
                    printf("  ");
                }

                else
                {
                    printf("* ");
                }
            }
            else
            {

                if (l <= n - k + 1)
                {
                    printf("  ");
                }

                else
                {
                    printf("* ");
                }
                l++;
            }
        }

        if (i > n)
        {
            k--;
        }

        printf("\n");
    }
}
void main()
{
    int n;

    printf("Enter Number : ");

    scanf("%d", &n);

    printDiamond(n);

}