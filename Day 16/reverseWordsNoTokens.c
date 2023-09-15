#include<stdio.h>

void reverse(char* s, int i, int j){
    while(i<=j){
        char c = s[i];
        s[i]=s[j];
        s[j]=c;
        i++;
        j--;
    }
}

void shifForward(char * s, int i){
    for(int j=i;j<strlen(s);j++){
        s[j]=s[j+1];
    }
}
char *reverseWords(char *s)
{
    int len = strlen(s)-1;
    int j=len;
    for(int i=len;i>=0;i--){
        if(s[i]==' '){
            reverse(s,i+1,j);
            j=i-1;
        }
        else if(i==0){
            reverse(s,i,j);
        } 
    }
    reverse(s,0,len);
    return s;
}
void main(){
char s[] = "    the sky     is blue   ";
// for(int i=0;i<strlen(s)-1;){
//     if(s[i]==' '){
//         shifForward(s,i);
//     }
//     else{
//         i++;
//     }
// }
// if(s[0]==' ')shifForward(s,0);
// if(s[strlen(s)-1]==' ')s[strlen(s)-1] = '\0';
char s1[strlen(s)];
for(int i=0;i<strlen(s);i++){
    if(s[i] != ' ' && s[i+1]!=' '){

    }
}
reverseWords(s);
printf(s);
}