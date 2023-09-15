#include <stdio.h>

int romanValues(char c)
{
    if (c == 'I')
        return 1;
    else if (c == 'V')
        return 5;
    else if (c == 'X')
        return 10;
    else if (c == 'L')
        return 50;
    else if (c == 'C')
        return 100;
    else if (c == 'D')
        return 500;
    else if (c == 'M')
        return 1000;
}
int romanToInt(char s[], int size)
{
    int prev = 0;
    int sum = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        int curr = romanValues(s[i]);
        if (prev <= curr)
        {
            sum += curr;
            prev = curr;
        }
        else
        {
            sum -= curr;
            prev = curr;
        }
    }
    return sum;
}
void main()
{
    char input[] = "XIV";
    int size = 3;

    printf("%d", romanToInt(input, size));
}