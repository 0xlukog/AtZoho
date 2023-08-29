#include<stdio.h>
int binarySearch(int *nums,int start, int end, int key){
int mid = (start+end)/2;
if(nums[mid]==key){
    return mid;
}
else if(nums[start]==key){
    return start;
}
else if(nums[end]==key){
    return end;
}
else if(start == end){
    if(nums[start]>key)
        return start;
    else 
        return start+1;
}
else if((end-start)==1){
    if(nums[start]>=key){
        return start;
        }
    else if(nums[end]<=key){
        return end+1;
    }
    else{
        return end;
    }
}
else if(nums[mid]>key){
    return binarySearch(nums,0,mid,key);
}
else if(nums[mid]<key){
    return binarySearch(nums,mid,end,key);
}
return 0;
}
void main(){
int nums[]={1};
printf("%d",binarySearch(nums,0,0,0));
}