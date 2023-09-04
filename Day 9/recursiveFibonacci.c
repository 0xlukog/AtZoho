#include <stdio.h>
#include <time.h>
static int memo[1000000];
long fibo(int n)
{
    if (n <= 1)
    {
        // printf("%d ",n);
        return n;
    }
    else if(memo[n]!=0){
        return memo[n];
    }
    else
    {
        memo[n]=fibo(n - 1) + fibo(n - 2);
        return memo[n];
    }
}

void main()

{
    long long int n = 1000000;
     for(int i=1;i<=n;i++){
        printf("%lld ",fibo(i));
     }

}
