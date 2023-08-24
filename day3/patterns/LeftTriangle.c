#include<stdio.h>
void main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf("  ");
        }
        for(int k=0;k<=i;k++){
            printf("* ");
        }
        for(int l=1;l<=i;l++){
            printf("* ");
        }
        printf("\n");
    }
    n=n-1;
    for(int i=0;i<n;i++){
        for(int j=-1;j<=i;j++){
            printf("  ");
        }
        for(int k=i;k<n;k++){
            printf("* ");
        }
        for(int l=i;l<n-1;l++){
            printf("* ");
        }
        printf("\n");
    }
}