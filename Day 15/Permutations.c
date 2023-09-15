#include<stdio.h>
int factorial(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
void permute(int* nums,int numsSize, int row, int fixedIndex,int res[][3]){
if(fixedIndex==numsSize-1){

}
else{
    res[row][fixedIndex]=nums[fixedIndex];
    for(int i=)
}

}
void main(){
    int nums[] = {1,2,3};
    int size = 3;

    int permutations = factorial(size);
    int Result[permutations][3];
    for(int i=0;i<permutations;i++)
    {
            permute(nums, size,i, 0,Result);
    }
}