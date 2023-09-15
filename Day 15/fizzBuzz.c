#include<stdio.h>
#include<stdlib.h>

char ** fizzBuzzGenerator(int n,int * returnSize){
char **retArray;
    retArray = malloc( sizeof(char)*200);
        for(int i=0;i<n;i++){
            retArray[i]=malloc( sizeof(char)*200);
        }
char fizz [] = "Fizz";
char buzz [] = "Buzz";
char fizzBuzz [] = "Fizz Buzz";
for(int i=0;i<n;i++){
    if((i+1)%15 == 0)
    {
        sprintf(retArray[i],"%s",fizzBuzz);
    }
    else if((i+1)%3 == 0)
    {
        sprintf(retArray[i],"%s",fizz);
    }
    else if((i+1)%5 == 0)
    {
        sprintf(retArray[i],"%s",buzz);
    }
    else
    {
        sprintf(retArray[i],"%d",i+1);
    }
}
*returnSize=n;
return retArray;
}
void main(){
int n = 15;
int returnSize = 0;
char ** s = fizzBuzzGenerator(n,&returnSize);
for(int i=0;i<returnSize;i++){
    printf("%s\n",s[i]);
}
}