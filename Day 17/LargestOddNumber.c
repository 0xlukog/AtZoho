
#include <stdio.h>

char *largestOddNumber(char *num)
{
    int len = strlen(num)-1;

    for(int i=len;i>=0;i--){
        if((num[i]-'0')%2!=0){
            return num;
        }
        else{
            num[i]='\0';
        }
    }
    
    return num;
}

void main()
{
    char s[] = "1772";
    printf("%s", largestOddNumber(s));
}