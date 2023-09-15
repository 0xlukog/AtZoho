#include <stdio.h>
#include<string.h>
char *removeOuterParentheses(char *s)
{
    int length = strlen(s);
    int open = 0;
    char *str = malloc(sizeof(char)*10000);

    for (int i = 0; i < length; i++)
    {
        if(open ==0 && s[i]=='('){
            open++;
            s[i] = '0';
        }
        else if (open>0 && s[i]=='('){
            open++;
        }
        else if(open >1 && s[i]==')'){
            open--;
        }
        else if(open ==1 && s[i]==')'){
            open--;
            s[i]='0';
        }
    }
    for(int i=0;i<length;i++){
        if(s[i]=='('){
            strcat(str,"(");
        }
        else if(s[i]==')'){
            strcat(str,")");
        }
    }
    return str;
}
void main()
{
    char s[] = "(()())(())(()(()))";
    char *res = removeOuterParentheses(s);
    printf("%s", res);
}