void scan2dArray(int (*arr)[SIZE], int row, int col)
{
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            scanf("%d", &(*(arr + i))[j]);
        }
    }
}
void print2dArray(int (*arr)[SIZE], int row, int col)
{
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
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
void replaceString(char *replace, char *replaceWith, int replaceWithlength)
{
    for (int i = 0; i < replaceWithlength; i++)
    {
        replace[i] = replaceWith[i];
    }
    replace[replaceWithlength] = '\0';
}