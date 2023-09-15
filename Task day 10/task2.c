#include <stdio.h>
int lengthOfWord(char s[])
{
    int length = 0;
    while (s[length++] != '\0');
    return length;
}
void findWord(char sentence[], char searchWord[], int senlen, int serlen)
{
    int f =0;
    for (int i = 0; i < senlen - serlen; i++)
    {
        if (sentence[i] == searchWord[0])
        {
            for (int j = 0; j < serlen; j++)
            {
                if (sentence[i + j] != searchWord[j])
                {
                    break;
                }
                else if (j == serlen - 1 && sentence[i + j + 1] == ' ' && !f)
                {
                    printf("\n-------Exact match found-------\n");
                    printf("index -> %*d\n",3,i);
                    f=1;
                }
                else if(j == serlen - 1 && sentence[i + j + 1] == ' ' && f){
                    printf("index -> %*d\n",3,i);
                }
            }
        }
    }
}
void main()
{
    char sentence[200];
    char searchWord[100];

    printf("Enter the sentence : ");
    fgets(sentence, sizeof(sentence[0]) * 200, stdin);

    printf("Enter the search word : ");
    fgets(searchWord, sizeof(searchWord[0]) * 100, stdin);

    int senLen = lengthOfWord(sentence) - 2;
    int searchLen = lengthOfWord(searchWord) - 2;

    findWord(sentence, searchWord, senLen, searchLen);
}