#include <stdio.h>
struct ListNode
{
    int count;
    char str[50];
    struct ListNode *next;
};

int lengthOfString(char str[])
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    return length;
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

int checkAndAdd(struct ListNode *head, char search[])
{
    struct ListNode *looper = head;
    while (looper->next != NULL)
    {
        if (compareString(looper->str, search, lengthOfString(looper->str), lengthOfString(search)) == 0)
        {
            looper->count++;
            return 1;
        }
        looper = looper->next;
    }
    return 0;
}
void main()
{
    struct ListNode *head;
    struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
    head = temp;
    char input[] = "the is not the is the not";
    int inputLength = lengthOfString(input) - 1;
    int end = inputLength;
    for (int i = inputLength; i >= 0; i--)
    {
        if (input[i] == ' ')
        {
            char *substring = subString(input, i + 1, end);

            if (checkAndAdd(head, substring) == 0)
            {
                struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
                sprintf(temp->str, "%s", substring);
                temp->count = 1;
                temp->next = newNode;
                newNode->next = NULL;
                temp = newNode;
            }
            end = i - 1;
        }
        else if (i == 0)
        {
            char *substring = subString(input, i, end);

            if (checkAndAdd(head, substring) == 0)
            {
                struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
                sprintf(temp->str, "%s", substring);
                temp->count = 1;
                temp->next = newNode;
                newNode->next = NULL;
                temp = newNode;
            }
        }
    }
    int maxCount = 0;
    char maxStr[50];
    while (head->next != NULL)
    {
        if (maxCount < head->count)
        {
            maxCount = head->count;
            sprintf(maxStr, "%s", head->str);
        }
        head = head->next;
    }
    printf("Most repeated word is \"%s\"", maxStr);
}