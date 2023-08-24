#include<stdio.h>
void main(){
    int n=6;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==0||i==n||j==0||j==n||i+j==n||i==j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}