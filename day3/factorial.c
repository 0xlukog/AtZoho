#include<stdio.h>
int factorial(int n){
    if(n==2){
        return 2;
    }
    else{
        return n*factorial(n-1);
    }
}
void main(){
    printf("%d",factorial(5));
}