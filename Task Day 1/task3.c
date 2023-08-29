//// Question 3 - Sum of odd numbers from 1 to n
#include<stdio.h>
int sumOddNumbers(int range){
    int sum=0;
    for(int i=1;i<=range;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    return sum;
}
void main(){
    int n;
    printf("Enter a number as Limit :\t");
    scanf("%d",&n);
    printf("The sum of Odd numbers from 1 to %d is %d\n",n,sumOddNumbers(n));
}
