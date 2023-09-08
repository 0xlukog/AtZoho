#include <stdio.h>

void main()
{
    int n = 7;

    int p = -1, flag = 0;

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=0;
        }
        

    }
    for (int i = 0; i < n; i++)
    {

        int s = i;

        for(int j=0;j<=i;){

            // if (s < n)
            // {

            //     printf(" ");
            //     s++;

            // }
           if (i == 0 || j == 0)
            {

                p = 1;

                j++;

                arr[i][j]=p;

            }

            else
            {

                p = p * (i - j + 1) / j;

                j++;

                arr[i][j]=p;

            }

        }

        printf("\n");
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
          if(arr[i][j]!=0){  printf("%d ",arr[i][j]);}
          else printf(" ");
        }
        
        printf("\n");
    }
    
}