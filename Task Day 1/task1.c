// Question 1 - Number of digits in a number
#include<stdio.h>
int countDigits(int n){
    int count=0;
    while(n!=0){
        count++;
        n=n/10;
    }
    return count;
}
void main(){
    int n;
    printf("Enter a number :\t");
    scanf("%d",&n);
    printf("There are %d digits in the number %d\n",countDigits(n),n);
}