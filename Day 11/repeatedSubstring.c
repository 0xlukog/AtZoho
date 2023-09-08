#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
// char *generateString(char sub[], int multiple, int subSize)
// {
//     int size = multiple*(subSize)+2;
//     char *generatedString = malloc(size*sizeof(char));
//     char genStr[subSize*multiple+2];
//     for (int i = 0; i < multiple; i++)
//     {
//         strcat(genStr, sub);
//     }
//     strcpy(generatedString,genStr+1);
//     return generatedString;
// }
void generateString(char sub[], char *returnArray, int multiple, int subSize)
{
    int size = multiple * (subSize) + 2;
    char *generatedString = malloc(size * sizeof(char));
    // char genStr[subSize*multiple+2];
    for (int i = 0; i < multiple; i++)
    {
        strcat(returnArray, sub);
    }
    // strcpy(generatedString,genStr+1);
    // return generatedString;
}

bool repeatedSubstringPattern(char *s)
{
    int sLen = strlen(s);
    int j = 0;
    for (int i = 1; i <= sLen / 2; i++)
    {
        char sub[sLen / 2];
        strncpy(sub, s, i + 1);
        for (j = 0; j < sLen; j++)
        {
            if (sLen % i == 0)
            {
                if (s[j] != s[j % i])
                {
                    break;
                }
            }
        }
        if (j == sLen)
        {
            return true;
        }
    }

    return false;
}
void main()
{
    char s[] = "abcabc";
    printf("%d", repeatedSubstringPattern(s));
    // repeatedSubstringPattern(s);
}