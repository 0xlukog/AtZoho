#include<stdio.h>
void main(){
    int n=10;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==n||j==n||i==1||j==1){
                printf("%c ",'*');
            }
            else{
                printf("%c ",' ');
            }
        }
        printf("\n");
    }
}