#include<stdio.h>
void printHourglass(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        {
            if((i+j<=n+1 && i<=j)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
void main(){
    int n=9;
    printHourglass(n);
}