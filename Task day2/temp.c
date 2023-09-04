// diamond printing
void printDiamond(int n)
{   
    int k=n;
    int loopCount = 0;
    for (int i = 1;loopCount<=2*n;)
    {
        loopCount++;

        for (int j = 1; j <= n + i; j++)
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
        if(i>=n){
        i--;
        }else{i++;}
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