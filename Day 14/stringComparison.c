#include <stdio.h>
#include <string.h>

void compareString(char *s1, char *s2)
{

    char *str = strstr(s1, s2);
    printf("%s", str);
    // char * token=strtok(s1,s2);
    // // printf("%s",token);
    // // token=strtok(NULL,s2);
    // // printf("%s",token);

    // while( token != NULL )
    // {
    //   // While there are tokens in "string"
    //   printf( "%s\n", token );

    //   // Get next token:
    //   token = strtok( NULL, s2 );
    // }
}
int lenofStr(char *s)
{
    int length = 0;
    while (s[length++] != '\0')
    {
        s++;
    }
    return length;
}

void scanString(char *s){
    scanf("%[^\n]s",s);;
}
int TotalNumberOfWords(char *s)
{
    int length = lenofStr(s);
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (s[i] == ' ')
            count++;
    }
    return count + 1;
}

int compareStrings(char *s, char *s2){

}

void MaximumFrequencyCharacter(char *s){
    static int alpha[94];
    int max = (__INT_MAX__*-1)+1;
    for(int i=0;i<lenofStr(s);i++){
        alpha[(int)s[i]-32] +=1;
        if(max < alpha[(int)s[i]-32] && s[i]!=' '){
            max = alpha[(int)s[i]-32];
        }
    }

    for(int i =0;i<94;i++){
        if(alpha[i] == max){
            printf("Character '%c' has the highest repeatation of %d times",i+32,alpha[i]);
        }
    }
}

void main()
{

    // char s1[] = "Welcome to programmint";
    char s[100],s1[100];
    // scanString(s);
    // scanf("\n");
    // printf("Scanned string 1");
    // scanString(s1);
    // // compareString(s1,s2);
    // // printf("%d", TotalNumberOfWords(s1));
    // // printf("%s\n%s",s,s1);
    char s2[] = "Write a program in C to count the total number of alphabets, digits and special characters in a string.";
    MaximumFrequencyCharacter(s2);
    
}