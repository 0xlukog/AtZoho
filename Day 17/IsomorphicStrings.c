#include <stdio.h>
void ChangeChar(char c, char d, int j,char *t, int len,int *arr)
{
    for (int i = j; i < len; i++)
    {
        if (t[i] == d && arr[i]==0&& c!=d)
        {
            t[i] = c;
            arr[i]=1;
        }
    }
}

int isIso(char *s, char *t)
{
    
    int len = strlen(t);
    int arr[100];
    for(int i=0;i<len;i++)arr[i]=0;
    // for(int i=0;i<len;i++)arr[i]=0;
    // char copy[len];
    // strcpy(copy,t);
    for (int i = 0; i < len; i++)
    {
        char c = s[i];
        char d = t[i];
        ChangeChar(c, d, i,t, len,arr);
    }
    // printf("%d",strcmp(s,t));
    return strcmp(s, t);
}
void main()
{
    char s[] = "badc";
    char t[] = "baba";
char sq[10000];
char dq[10000];
sprintf(sq,"%s",t);
sprintf(dq,"%s",s);
int i = (isIso(s,t)==0)?0:1;
int j =(isIso(sq,dq)==0)?0:1;
int res =0;
if(i==0 && j==0 ){res = 1;}
// int res = 
    
    printf("%s\n",res?"true":"false");
}