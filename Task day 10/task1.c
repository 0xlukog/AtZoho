#include <stdio.h>
int lengthOfWord(char s[])
{
    int length = 0;
    while (s[length++] != '\0')
        ;
    return length;
}

int fillWord(char temp[], int current, int i, int j, char str[])
{

    for (; i <= j; i++)
    {
        char c = str[i];
        temp[current] = c;
        current++;
    }
    temp[current] = ' ';

    return current;
}

void reverseWords(char *s, int length)
{
    int end = length - 1, fixedJ = 1, k = 0;
    char temp[100];
    for (int i = 0; i < 100; i++)
        temp[i] = '\0';

    for (int i = length; i >= 0; i--)
    {
        if (s[i] == ' ' && fixedJ == 1)
        {
            k = fillWord(temp, k, i + 1, end, s);
            k++;
            end = i - 1;
            fixedJ = 1;
        }
        else if (i == 0 && fixedJ == 1)
        {
            k = fillWord(temp, k, 0, end, s);
            k++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        s[i] = temp[i];
    }

    s[k - 1] = '\0';
}

void main()
{
    char input[100];
    printf("Enter a Stirng : ");
    scanf("%[^\n]s", input);
    printf("\n");

    int length = lengthOfWord(input) - 1;
    reverseWords(input, length);

    printf("\n%s", input);
}