#include<stdbool.h>
#include<stdio.h>
int countCharacters(char *s){
    static int alphabets[94];
    for(int i=0;i<strlen(s);i++){
        alphabets[(int)s[i]-32]+=1;
    }
    for(int i=0;i<94;i++){
        if(alphabets[i]!=0&&alphabets[i]!=1){
            printf("\n\'%c\' - %d",(32+i),alphabets[i]);
        }
        
    }
    return 0;
}
bool areOccurrencesEqual(char * s){
    static int alphabets[26];
    int index=0;
    for(int i=0;i<strlen(s);i++){
        alphabets[(int)s[i]-97]+=1;
        index = (int)s[i]-97;
    }
    for(int i=0;i<26;i++){
        if(alphabets[i]!=0&&alphabets[index]!=alphabets[i]){
            return false;
        }
        
    }
    return true;
}
void main(){
    char*s = "vvvvvvvvvvvvvvsadgslkjdsaflksmdv";
    countCharacters(s);
}