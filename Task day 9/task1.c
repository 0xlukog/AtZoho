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

char findMiddleChar(char str[], int length)
{
    return str[length / 2];
}

void main()
{
    char str[500];
    int length = 0;
    char middleChar;

    printf("Enter a Sring to find its length : "); // input prompting
    scanf("%s", str);
    printf("\n");

    length = lengthOfString(str);

    printf("The length of the given string \"%s\" is %d\n\n", str, length);

    middleChar = findMiddleChar(str, length);

    printf("The middle character of the string is \"%s\" is \'%c\'\n\n", str, middleChar);
}