#include<stdio.h>
#include<stdbool.h>
bool canJump(int* nums, int numsSize){
int sum=0,size=numsSize;
int i=0;
if(numsSize=0&&nums[0]!=1){
    return false;
}
while(--size){
sum+=nums[i];
i+=nums[i];
if(nums[i]==0&&sum!=numsSize-1){
    return false;
}
else if(i>=numsSize){
    return true;
}
else if(sum==numsSize-1){
    return true;
}
else if(sum>=numsSize){
    return false;
}

}
return false;
}

void main(){
    int nums[] = {2,5,0,0};
    int numsSize = 4;
    printf("%d",canJump(nums,numsSize));
}