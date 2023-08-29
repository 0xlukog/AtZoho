#include<stdio.h>
#include<stdbool.h>
// int removeDuplicates(int* nums, int numsSize){
//     int prev=-200;    
//     int j=0;
//     int pointer = 0;
//     int k=1;
//     for(int i=0;i<numsSize-1;i++){
//         bool changed = false;
//         for(int j=i+1;j<numsSize;j++){
//             int n1 = nums[i],n2=nums[j];
//             if((n1==n2&&!changed)|| n1>n2 && !changed){
//                 pointer = j;
//                 changed = true;
//                 prev = n1;
//             }
//             else if(n1<n2&& changed){
//                 nums[pointer]=n2;
//                 break;
//             }
//             else if(pointer==0){
//                 nums[pointer] = n1;
//                 pointer++;
//             }
//         }

//     }
//     for(int i=0;i<numsSize-1;i++){
//         // printf("%d %d --- ",nums[i],nums[i+1]);
//         if(nums[i+1]-nums[i]<=0){
//             k=i+1;
//             break;
//         }
//         k++;
//     }
//     return k;
// }
//  int removeDuplicates(int* nums,int numsSize) {
    
        
//         int count = 0;                              // Store a count with zero
        
//         for(int i = 1;i<numsSize; i++){          // Starting the index from 1 because we have to comapre Index 0
//             int n1=nums[i],n2=nums[count];
//             if(n1!=n2){
//                 count++;    
//                 nums[count] = nums[i];              // Inserting the values in modified array
//             }
            
//         }
//         return count+1;                             // Size of array will be (index+1)
//     }
void swap(int* nums, int i,int j){
    int temp=nums[i];
    nums[i]=nums[j];
    nums[j]=temp;
}
void main(){
int num[] = {1,1,2,2,2,3,3,4};
int k= removeDuplicates(num,10);
printf("%d\n\n",k);
// k=8;
for(int i=0;i<k;i++){
    printf("%d",num[i]);
}
}