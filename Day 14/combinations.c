#include<stdio.h>

void combination(int arr[],int size){
for(int i=0;i<size;i++){

//   for(int j=0;j<size;j++){
    printf("%d ",arr[i%(size)]);
//   }
printf("\n");
}
}
void main(){
int arr[] = {1,2,3,4};
int n =4;
combination(arr,n);
}
// #include<stdio.h>

// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//       printf("%d",arr[i]);
//   }
// printf("\n");


// }
// void main(){
// int arr[] = {1,2,3,4};
// int n =4,tem=0;
// for(int i=0;i<n;i++){
//   for(int j=1;j<n;j++){

//     tem=arr[i];
//     arr[i]=arr[j];
//     arr[j]=tem;
//     print(arr,n);
    
//   }
// printf("\n");
// }

// }