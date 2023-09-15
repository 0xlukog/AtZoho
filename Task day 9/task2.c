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

void swapValues(char a[], int i, int j)
{
    char t = a[i];
    a[i] = a[j];
    a[j] = t;
}

void sortString(char a[], int size)
{
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {

            if (a[i] > a[j])
            {
                swapValues(a, i, j);
            }
        }
    }
}

int compareString(char a[], char b[], int aLength, int bLength)
{
    if (aLength != bLength)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < aLength; i++)
        {
            if (a[i] != b[i])
            {
                return 0;
            }
        }
    }

    return 1;
}

void main()
{
    char a[500];
    char b[500];

    printf("Enter Stirng one : ");
    scanf("%s", a);
    printf("\n");

    printf("Enter String two : ");
    scanf("%s", b);
    printf("\n");

    int aLength = lengthOfString(a);
    int bLength = lengthOfString(b);

    sortString(a, aLength);
    sortString(b, bLength);

    int result = compareString(a, b, aLength, bLength);

    printf("%s", result ? "Is an Anagram..!\n" : "Is Not an Anagram..!\n");
}