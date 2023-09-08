#include<stdio.h>

void function(int  *arr, int length){
    int max = __INT_MAX__;
    int secondMax =__INT_MAX__;
for(int i=1;i<length;i++){
    if(arr[i]<max){
        secondMax = max;
        max = arr[i];
    }
    if(arr[i]<secondMax &&arr[i]!=max){
        secondMax = arr[i];
    }
}

    
    

printf("max : %d, 2max : %d",max,secondMax);
}
void main(){
int arr[]={1,5,3,2,76,4,7,3,2,1,8,6,9};
int n =13;
function(arr,n);
}