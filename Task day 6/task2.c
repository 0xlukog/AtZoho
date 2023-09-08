#include<stdio.h>

void seprateArrays(int arr[],int n){
static int even[100];
static int odd[100];
int oddIndex=0;
int evenIndex=0;
for(int i=0;i<n;i++)
{
    if(arr[i]%2==0){
        even[evenIndex++]=arr[i];
    }
    else{
        odd[oddIndex++]=arr[i];
        }
}
for(int i=0;i<evenIndex;i++){
    printf("%d ",even[i]);
}
printf("\n");
for(int i=0;i<oddIndex;i++){
    printf("%d ",odd[i]);
}
}

void main(){
    int n;


    printf("\nEnter the size of array : ");
    scanf("%d",&n);

    int arr[n];


    for(int i=0;i<n;i++){

        printf("\nEnter the element %d : ",i+1);
        scanf("%d",&arr[i]);

    }

seprateArrays(arr,n);

}