#include <stdio.h>

int *twoSum(int *arr, int n,int target)
{
    int *res = malloc(2 * sizeof(int));
    for(int i=0;i<n-1;i++){
    
      for(int j=i+1;i<n;j++){
        if(arr[i]+arr[j]==target){
            res[0]=i;
            res[1]=j;
            return res;
        }
      }
    
    }
    return res;
}
void main()
{
    int arr[] = {2, 7, 11, 15};

    int *res = twoSum(arr,4,9);

    printf("[%d, %d]\n", res[0], res[1]);
}