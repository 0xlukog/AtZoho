#include<stdio.h>

void function(char *s, char *t){

int sLen = strlen(t);
int tA[sLen];
int sA[sLen];
for(int i=0;i<sLen;i++){
    int count =0;
    sA[i]=0;
    for(int j=i+1;j<sLen;j++){
        if(s[i]==s[j]){
            break;
        }
        else{
            sA[i]++;
        }
    }
}
for(int i=0;i<sLen;i++){
    int count =0;
    tA[i]=0;
    for(int j=i+1;j<sLen;j++){
        if(t[i]==t[j]){
            break;
        }
        else{
            tA[i]++;
        }
    }
}
for(int i=0;i<sLen;i++){
    printf("s - %d, t - %d \n",sA[i],tA[i]);
}
}
void main(){
char s[] = "foo";
char t[] = "bar";
function(s,t);
}