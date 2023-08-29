#include<stdio.h>
int removeElement(int* nums, int numsSize, int val){
    int count =0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=val){
            nums[count]=nums[i];
            count++;
        }
    }
    return count;
}
void main(){
int num[] = {1,1,2,2,3};
int k= removeElement(num,5,2);
printf("%d\n\n",k);
for(int i=0;i<k;i++){
    printf("%d  ",num[i]);
}
}