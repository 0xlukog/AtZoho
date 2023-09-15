#include <stdio.h>
#include<stdlib.h>

char X[] = "code";
char Y[] = "sleep";

int lengthOfString(char str[])
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

void addStrings(char saveTo[], char save[], int saveLength)
{
    int i = 0, j = 0;
    while (saveTo[i++] != '\0')
        ;
    for (; j < saveLength; j++)
    {
        saveTo[i++] = save[j];
    }
    saveTo[j] = '\0';
}

int compareString(char a[], char b[])
{
    int result = 0;
    int aLen = lengthOfString(a);
    int bLen = lengthOfString(b);
    int min = aLen < bLen ? aLen : bLen;

    for (int i = 0; i < min; i++)
    {
        if (a[i] == b[i])
        {
            result = 0;
        }
        else
        {
            result = -1;
            break;
        }
    }

    return result;
}
char *generateString(char pattern[])
{
    int patternLength = lengthOfString(pattern);
    char *result = malloc(sizeof(char) * 500);
    for (int i = 0; i < patternLength; i++)
    {
        if (pattern[i] == 'X' || pattern[i] == 'x')
        {
            addStrings(result, X, 4);
        }
        else if (pattern[i] == 'Y' || pattern[i] == 'y')
        {
            addStrings(result, Y, 5);
        }
    }

    return result;
}
void main()
{
    char pattern[50];
    char string[500];

    printf("Enter the String : ");
    scanf("%s", string);

    printf("Enter the pattern : ");
    scanf("%s", pattern);

    char *result = generateString(pattern);
    
    int check = compareString(string, result);

    printf("%s", check == 0 ? "True" : "False");
}