#include<stdio.h>
void main(){
    const char name='a';
    char na='g';
    char* ptr ;
    ptr= &name;
    *ptr = na;
    printf("%c",name);
}