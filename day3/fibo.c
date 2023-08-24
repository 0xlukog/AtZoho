#include<stdio.h>
void printFibo(int n){
    int a = -1,b=1,c=a+b;
    for(int i=0;i<n;i++){
        printf("%d",c);
        a=b;
        b=c;
        c=a+b;
    }
}
void main(){
    printFibo(10);
}