#include <stdio.h>
void main()
{   int n=5;
int count=0;
int i=1;
int k=n;
while(count<=n*2){
for(int j=1;j<=n+i;j++){
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
            if (j <= n*2 - k+1)
            {
                printf("  ");
            }
            else
            {
                printf("- ");
            }
        }
        
}       
        printf("\n");
        if(i>n/2)
        {k--;}
        i++;
        count++;
}
    // for (int i = 1,k=2*n; i <= n*2; i++)
    // {
    //     for (int j = 1; j <= n*2 + i; j++)
    //     {
    //         if (i <= n)
    //         {
    //             if (j <= n*2 - i + 1)
    //             {
    //                 printf("  ");
    //             }
    //             else
    //             {
    //                 printf("* ");
    //             }
    //         }
    //         else
    //         {
    //             if (j <= n*2 - i + 1)
    //             {
    //                 printf("  ");
    //             }
    //             else
    //             {
    //                 printf("* ");
    //             }
    //             k--;
    //         }
    //     }
    //     printf("\n");
    // }
}