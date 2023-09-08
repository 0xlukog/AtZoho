#include <stdio.h>

char* RemoveSubstring(char * s1, char* s2)
{
     int s1Len = strlen(s1);
     int  s2Len = strlen(s2);
     for(int i=0;i<s2Len;i++){
        for(int j=0;j<s1Len;j++){
            if(s1[j]==s2[i]){
                s1[j]=' ';

            }

        }
     }
     for(int i=0;i<s1Len;i++){
        if(s1[i]==' '){
            int t = i;
            while(t<s1Len){
                if(s1[t]!=' '){
                    break;
                }
                t++;
            }
            s1[i]=s1[t];
            s1[t]=' ';
        }
     }
     return s1;
}
void main()
{
    char s1[] = "ggggggooooooooooooookuuuulllllll";
    char s2[] = "ougl";
    char * res = RemoveSubstring(s1,s2);
    printf("%s",s1);
}