#include<stdio.h>
#include<string.h>
void main(){
    char c;
    printf("Enter an alphabet");
    scanf("%c",&c);
    c=tolower(c);
    switch (c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("IT IS A VOWAL");break;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z': printf("IT IS A CONSONENT");break;
        default: printf("NOT AN ALPHABET"); break;
    }
}