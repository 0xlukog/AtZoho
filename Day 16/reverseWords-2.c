#include <stdio.h>
#include <string.h>
char *split(char s[], int i, int j)
{
    char *string = malloc(sizeof(char) * 100);
    for (int k = 0; i <= j; k++)
    {
        string[k] = s[i++];
    }
    return string;
}
char *reverseWords(char *s)
{
    char space = ' ';
    int len = strlen(s) - 1, fixedJ = 0, j = len, k = 0;
    char tempStorage[1000][100];
    char *returnArray = (char *)malloc(sizeof(char) * strlen(s));
    strcpy(returnArray,s);
    s[0]='\0';
    for (int i = len; i >= 0; i--)
    {
        if (returnArray[i] != space && fixedJ == 0)
        {
            j = i;
            fixedJ = 1;
        }
        else if (returnArray[i] == space && fixedJ == 1)
        {
            char *temp = split(returnArray, i + 1, j);
            sprintf(tempStorage[k++], "%s ", temp);
            fixedJ = 0;
        }
    }
    int i = 0;
    while (i < k)
    {
        strcat(s, tempStorage[i++]);
    }
    s[strlen(s) - 1] = '\0';
    // strcpy(s,returnArray);
    return s;
}
void main()
{
    char s[] = "  hello       world  ";
    char *r = reverseWords(s);
    printf("%s", r);
}