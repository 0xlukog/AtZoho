#include<stdio.h>
#include<string.h>
#include<stdbool.h>
static int alphabets[94];
void countCharacters(char *s,bool plusOrMinus){
    for(int i=0;i<strlen(s);i++){
        if(plusOrMinus){
        alphabets[(int)s[i]-32]+=1;
        }
        else{
            alphabets[(int)s[i]-32]-=1;
        }
    }

}
bool isAnagram(char  * s, char * t){
    int s_len = strlen(s);
    int t_len = strlen(t);
    if(s_len!=t_len){
        return false;
    }
    countCharacters(s,true);
    countCharacters(t,false);
    for(int i=0;i<94;i++){
        if(alphabets[i]!=0)
            {
                return false;
            }
    }
    return true;
}

void main(){
    char s[]="anagram";
    char t[] = "margana";
    printf("%s",isAnagram(s,t)?"True":"False");
}
