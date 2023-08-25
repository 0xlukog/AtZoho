//largest of 2 number using switch
#include<stdio.h>
void main()
{
    const int a,b;
    scanf("%d%d",&a,&b);
    switch (a>b?0:1)
    {
        case 0: printf("%d",a);
                break;
        case 1:printf("%d",b);
                break;
        default:
                break;
    }
}