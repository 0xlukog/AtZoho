// subsequence.c

#include <stdio.h>
int lengthOfString(char str[])
{
    int length = 0;
    while (str[length] != NULL)
    {
        length++;
    }
    return length;
}
int checkSubString(char word[], char search[])
{
    int wordLen = lengthOfString(word);
    int searchLen = lengthOfString(search);
    int i = 0;
    int j = 0;

    while (i < wordLen)
    {
        if (j == searchLen - 1 && (word[i] == search[j] || search[j] == '*'))
        {
            return 1;
        }
        else if (i == wordLen - 1 && word[i] != search[j])
        {
            return 0;
        }

        if (search[j] == word[i] || search[j] == '*')
        {
            j++;
            i++;
        }
        else
        {
            i++;
        }
    }
}
void main()
{
    char word[100];
    char search[50];

    printf("Enter the main String : ");
    scanf(" %s", word);

    printf("Enter the sub string to check :");
    scanf("%s", search);

    int result = checkSubString(word, search);
    printf("%s", result == 1 ? "true" : "false");
}