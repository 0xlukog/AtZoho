#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(char * s){
    int n = strlen(s);
for(int i=0,j=n-1;i!=j;){

    if(!((int)(tolower(s[i])>=48)&&((int)(tolower(s[i])<=57))) && !((int)(tolower(s[i])>=97)&&((int)(tolower(s[i])<=122)))){
        i++; continue;
    }
        if(!((int)(tolower(s[j])>=48)&&((int)(tolower(s[j])<=57))) && !((int)(tolower(s[j])>=97)&&((int)(tolower(s[j])<=122)))){
        j--; continue;
    }
    char c = tolower(s[i]),c1 = tolower(s[j]);
    if(c!=c1|| (i==j&&c==c1)){
    return false;
    }
    i++,j--;
}
return true;
}   

int main(){
    printf("%s",isPalindrome(",,,,,,,,,,,,acva")?"true":"false");
}