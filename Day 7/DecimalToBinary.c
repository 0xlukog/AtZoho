#include<stdio.h>
int* dec2bin(int decimal){
static int binArray[8];
int i=0;
while(decimal!=0){
binArray[i++]=decimal%2;
decimal/=2;

}
return binArray;
}
void main(){
    int n=6;
    int *arr = dec2bin(n);
    for(int i=7;i>=0;i--){
        printf("%d",arr[i]);
    }
}