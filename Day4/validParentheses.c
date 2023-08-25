#include<stdbool.h>
#include<string.h>
#include<stdio.h>
void findPair(int start,char bracket, char s[], int len){
    //printf("%d",len);
    for(int i=len-1;i<=start;i--){
        char c = s[i];
        if(c==bracket){
            s[i]='0';
            s[--start]='0';
        }
    }
}
bool isValid(char s[]){
    int len = 6;
    for(int i=0;i<len;i++){
        char cur = s[i];
        if(cur=='(' && i+1<len){
            printf("%d",len);
            findPair(i+1,')',s,len);
        }
        else if(cur=='{' && i+1<len){
            findPair(i+1,'}',s,len);
        }
        else if(cur=='[' && i+1<len){
            findPair(i+1,']',s,len);
        }
        else{
            continue;
        }
    }
    for(int i=0;i<len;i++){
        if(s[i]!=0){
            return false;
            break;
        }
        else{
        return true;
        }
        return false;
    }
}
void main(){
    char input[] = {'(',')','{','}','[',']'};
    bool result = isValid(input);
    printf("%d",result);
}