#include <stdio.h>

int myAtoi(char *s)
{
    int len = strlen(s);
    int num = 0, i = 0, neg = 0, j;
    for (; i < len; i++)
    {
        if (s[i] - 48 >= 0 && s[i] - 57 <= 0)
        {
            break;
        }
        else if (s[i] == '-')
        {
            neg = 1;
            i++;
            break;
        }
    }
    for (j = len - 1; j >= 0; j--)
    {
        if (s[j] - 48 >= 0 && s[j] - 57 <= 0)
        {
            break;
        }
    }
    for (; i <= j; i++)
    {
        char c = s[i];
        num = num * 10 + c - 48;
    }
    if (neg)
    {
        return num * -1;
    }
    else
    {
        return num;
    }
}
void main()
{
    char s[] = "-91283472332";
    printf("%d", myAtoi(s));
}