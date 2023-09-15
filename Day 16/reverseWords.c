#include <stdio.h>
#include <string.h>

char *reverseWords(char *s)
{
    char space[] = " ";
    int len=0;
    char *token = strtok(s, space);
    char tempStorage[1000][100];
    char *returnArray = malloc(sizeof(char) * 10000);
    int i = 0, end = 0;
    while (token != NULL)
    {   
        len+=strlen(token)+1;
        sprintf(tempStorage[i++], "%s ", token);
        token = strtok(NULL, space);
    }
    for (; i >= 0; i--)
    {
        strcat(returnArray, tempStorage[i]);
    }
    for(int i=len-1;i>=0;i--){
        if(returnArray[i]==' '){
            returnArray[i]='\0';
        }
        else{break;}
    }
    return returnArray;
}
void main()
{
    char s[] = "  hello world  ";
    char *r = reverseWords(s);
    printf("%s", r);
}