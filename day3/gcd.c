#include<stdio.h>
int gcd(int a, int b){
    int small = a<b?a:b;
    int big = a>b?a:b;
    if(small==0){
        return big;
    }
    else{
        return gcd(small,big%small);
    }
}
void main(){
    printf("%d",gcd(36,18));
}