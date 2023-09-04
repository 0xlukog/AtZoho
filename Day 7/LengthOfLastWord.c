#include<stdio.h>
int lengthOfLastWord(char * s){ 
    int len = strlen(s)-1;
    int count=0;
    for(int i=len;i>=0;i--){
        if(i>=0&&s[i]!=' '){
            for(int j=i;j>=0;j--){
                if(s[j]==' '||j==0){
                    if(s[j]!=' '){
                        count++;
                    }
                    return count;
                }
                else{
                    count++;
                }
            }
        }
    }
    return count;
}
void main(){
    char *s = "day";
    printf("%d",lengthOfLastWord(s));
}