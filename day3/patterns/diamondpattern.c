#include<stdio.h>
void main(){
    int  n=5;
    for (int i = 0;i < n; i ++){
        for(int j = 0; j < n-1-i; j++){
            printf(" ");
        }
        for(int x = 0; x <= i; x++){
            printf("x ");
        }
        printf("\n");
    }
    int n2 = 4;
    for(int i = 0;i < n2; i++){
        for(int j = 0; j < n-n2){

        }
    }
}