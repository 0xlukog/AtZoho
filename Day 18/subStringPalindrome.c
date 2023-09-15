#include <stdio.h>
#include <stdlib.h>

int palindromeOrNot(char s[], int start, int end)
{
    while (start < end)
    { 
        if (s[start++] != s[end--])
        {
            return 0;
        }
    }
    return 1;
}

void replaceString(char *replace, char *replaceWith, int rWlen)
{
    for (int i = 0; i < rWlen; i++)
    {
        replace[i] = replaceWith[i];
    }
    replace[rWlen] = '\0';
}
char *subString(char s[], int i, int j)
{
    char *retString = malloc(sizeof(char) * (i + j));
    for (int k = 0; i <= j; k++, i++)
    {
        retString[k] = s[i];
    }
    return retString;
}
void printPalindromicSubString(char s[], int length)
{
    int max = 0;
    char maxStr[50];
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; (j) < length; j++)
        {
            if (palindromeOrNot(s, i, j))
            {
                char *printStr = subString(s, i, j);
                printf("palindrome - %s\n", printStr);
                if (max < (j - i + 1))
                {
                    max = j - i + 1;
                    replaceString(maxStr, printStr, max);
                }
            }
        }
    }
    printf("Max length of the palidrome is %d and palindrome is %s\n", max, maxStr);
}
void main()
{
    char s[] = "madamcamotocollegesaippuakivikauppias";
    printPalindromicSubString(s, 37);
}