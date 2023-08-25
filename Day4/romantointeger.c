#include <stdio.h>
int findRoman(char c)
{
    if (c == 'I')
    {
        return 1;
    }
    else if (c == 'V')
    {
        return 5;
    }
    else if (c == 'X')
    {
        return 10;
    }
    else if (c == 'L')
    {
        return 50;
    }
    else if (c == 'C')
    {
        return 100;
    }
    else if (c == 'D')
    {
        return 500;
    }
    else if (c == 'M')
    {
        return 1000;
    }
}
int romanToInt(char *s)
{
    int sum = 0, cur = 0;
    // int I=1,V=5,X=10,C=100,L=50,M=1000,D=500;
    int len = strlen(s);
    for (int i = len - 1; i >= 0; i--)
    {
        if (cur <=findRoman(s[i]))
        {
            sum += findRoman(s[i]);
        }
        else
        {
            sum -= findRoman(s[i]);
    
        }
        cur = findRoman(s[i]);
    }
    return sum;
}
void main()
{
    char *s = "MCMXCIV";
    printf("%d", romanToInt(s));
}