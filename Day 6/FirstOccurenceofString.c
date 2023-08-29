#include<stdbool.h>
#include<stdio.h>
int strStr(char * haystack, char * needle){
    int index=-1;
    bool flag=false;
    int hl = strlen(haystack);
    int nl = strlen(needle);
    for(int i=0;i<hl;i++){
        if(haystack[i]==needle[0]&&i+nl<=hl){
            index=i;
            for(int j=0;j<nl;j++){
                char c =haystack[i+j],d=needle[j];
                if(c!=d){
                    break;
                }
                else if(nl==j+1){
                    flag=true;
                }
            }
            if(flag){
                return i;
            }
        }
    }
return -1;
}
void main(){
    char * haystack="leetcode";
    char* needle = "leeto";
    printf("%d",strStr(haystack,needle));
}