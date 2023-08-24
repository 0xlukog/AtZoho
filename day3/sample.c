#include <stdio.h>
#include<stdlib.h>
int pow(int base,int power){
    int res=1;
    for(int i=1;i<=power;i++){
        res*=base;
    }
    return res;
}
int reverseNum(int num){
    int rev = 0;
    int power = 0;
    while (num != 0)
    {
        int n = num % 10;
        rev = 10 * rev + n;
        num = num / 10;
    }
    return rev;
}
void main()
{
int num = 125;
int temp = num;
num=reverseNum(num);
int result = 0;
int power = 1;
while(num!=0){
    int n = num%10;
    result+=pow(n,power++);
    num=num/10;
}
printf("%d  --  %d",temp,result);
}