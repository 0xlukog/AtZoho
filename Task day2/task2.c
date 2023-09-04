// pyramid shape
#include <stdio.h>

void printPrymid(int n)
{
    // for (int i = 1; i <= n; i++)
    // {   
    //     for (int j = i; j <= n; j++)
    //     {
    //         printf("  ");
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         printf("* ");
    //     }
    //     for (int l = 1; l < i; l++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // for (int i = 1,odd=1; i <= n; i++,odd+=2)
    // {   
        
    //     for (int j = i; j <= n; j++)
    //     {
    //         printf("  ");
    //     }
    //     for (int k = 1; k <= odd; k++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }



    // for (int i = 1, odd=(n*2)-1; i <= n; i++, odd-=2)
    // {   
        
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("  ");
    //     }

    //     for (int k = 1; k <= odd; k++)
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");
    // }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + i; j++)
        {
            if(j<=n-i+1){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}

void main()
{
    int n;

    // printf("Enter the height of pyramid : ");

    // scanf("%d", &n);

    printPrymid(5);
}