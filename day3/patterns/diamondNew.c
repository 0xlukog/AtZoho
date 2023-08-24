#include<stdio.h>
void main(){
    int n=5;
        for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=i;k<n;k++){
            printf("* ");
        }
        printf("\n");
    }
n=n-1;
    for(int i=1;i<n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }


}