#include <stdio.h>

void printTriangle(int n)
{
    int num = 1;
    int n2 = n;
    int count =0;
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            if(flag){
                k++;
            }
            {
              if(i==0||j==0){
                num=1;
              }
              else{
                num=num*(i-j+1)/j;
              }
              printf(" %d",num);
            }
        }
        n2--;

        printf("\n");

    }

}

int main()
{
    int n;

    // printf("Enter the number of lines : ");

    // scanf("%d", &n);

    printTriangle(5);

}
