#include<stdio.h>
void main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==n||i+j==n+1||i==j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}