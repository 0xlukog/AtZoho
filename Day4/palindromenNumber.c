#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int x)
{   
    if(x<0){
        return false;
    }
    long temp = x;
    int revX = 0;
    while (x != 0)
    {
        revX = revX * 10 +(x % 10);
        x = x / 10;
    }

    if (temp == revX)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void main()
{
 bool res = false;
 res = isPalindrome(121);
 if(res){
    printf("true");
 }
 else{
    printf("false");
 }
}