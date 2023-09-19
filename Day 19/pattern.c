#include <stdio.h>
#include <stdlib.h>

char X[] = "code";
char Y[] = "sleep";
typedef struct
{
    char word[50];
    char pattern;
} pat;

pat p[3];
void init()
{
    p[0].pattern = 'x';
    replaceString(p[0].word, "code", 4);

    p[1].pattern = 'y';
    replaceString(p[1].word, "sleep", 5);
    p[2].pattern = 'z';
    replaceString(p[2].word, "note", 5);
}

char *findWord(char c)
{
    for (int i = 0; i < 3; i++)
    {
        if (c == p[i].pattern)
        {
            return p[i].word;
        }
    }
}
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
    while (saveTo[i] != '\0')
    {
        i++;
    }
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
        addStrings(result, findWord(pattern[i]), lengthOfString(findWord(pattern[i])));
    }

    return result;
}
void replaceString(char *replace, char *replaceWith, int replaceWithlength)
{
    for (int i = 0; i < replaceWithlength; i++)
    {
        replace[i] = replaceWith[i];
    }
    replace[replaceWithlength] = '\0';
}
void main()
{
    char pattern[50];
    char string[500];
    init();
    printf("Enter the String : ");
    scanf("%s", string);

    printf("Enter the pattern : ");
    scanf("%s", pattern);

    char *result = generateString(pattern);

    int check = compareString(string, result);

    printf("%s", check == 0 ? "True" : "False");
}