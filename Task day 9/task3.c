#include <stdio.h>

int lengthOfString(char str[])
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

void swap(char s[100][100], int k, int l)
{
    char t[100];
    int aLen = lengthOfString(s[k]);
    int bLen = lengthOfString(s[l]);
    int min = aLen < bLen ? aLen : bLen;
    int max = aLen > bLen ? aLen : bLen;
    for (int i = 0; i < min; i++)
    {

        t[i] = s[k][i];

        if (i == min - 1)
        {
            t[i + 1] = '\0';
        }
    }

    for (int i = 0; i < max; i++)
    {

        s[k][i] = s[l][i];

        if (i == max - 1)
        {
            s[k][i + 1] = '\0';
        }
    }

    for (int i = 0; i < min; i++)
    {

        s[l][i] = t[i];

        if (i == min - 1)
        {
            s[l][i + 1] = '\0';
        }
    }
}

void scanStringArray(char str[100][100], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%s", str[i]);
    }
}

int compareString(char a[], char b[], int aLen, int bLen)
{
    int result = 0;
    int min = aLen < bLen ? aLen : bLen;
    for (int i = 0; i < min; i++)
    {
        if (a[i] == b[i])
        {
            result = 0;
        }
        else if (a[i] > b[i])
        {
            result = 1;
            break;
        }
        else if (a[i] < b[i])
        {
            result = -1;
            break;
        }
    }
    return result;
}

void sortStringArray(char stringArray[100][100], int size)
{
    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            int aLength = lengthOfString(stringArray[i]);
            int bLength = lengthOfString(stringArray[j]);
            int compared = compareString(stringArray[i], stringArray[j], aLength, bLength);
            if (compared > 0)
            {
                swap(stringArray, i, j);
            }
        }
    }
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%s\n", stringArray[i]);
    // }
}

char *findCommonPrefix(char stringArray[100][100], int size)
{
    char *result = (char *)malloc(sizeof(char) * 100);
    int firstLength = lengthOfString(stringArray[0]);
    int lastLength = lengthOfString(stringArray[size - 1]);
    int i = 0;

    while (i < firstLength)
    {
        char c = stringArray[0][i];
        char d = stringArray[size - 1][i];
        if (c == d)
        {
            result[i] = c;
        }
        else
        {
            break;
        }
        i++;
    }

    return result;
}

void main()
{
    char stringArray[100][100];
    int size;

    printf("Enter the size of Array : ");
    scanf("%d", &size);

    scanStringArray(stringArray, size);
    sortStringArray(stringArray, size);
    char *result = findCommonPrefix(stringArray, size);

    printf("The longest Common Prefix is %s..", result);
}