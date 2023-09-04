#include<stdio.h>
int* plusOne(int* digits, int digitsSize, int* returnSize){
int *returnArray = malloc (digitsSize+1 * sizeof(int));
for(int i=digitsSize-1;i>=0;i--){
    if(digits[i]<9){
        digits[i]++;
        returnSize=digitsSize;
        return digits;
    }
    else if(i-1!=0&&digits[i]==9){
        digits[i]=0;
        digits[i-1]++;
        returnSize=digitsSize;
        returnArray=digits;
        return returnArray;
    }
    if(i==0&&digits[i]==9){
        returnArray[0]=1;
        for(int j=1;j<=digitsSize;j++){
            returnArray[j]=0;
        }
    }
    returnSize=digitsSize+1;
    return returnArray;
}
returnSize=digitsSize;
returnArray=digits;
return returnArray;
}
void main(){
    int digits[] = {9,9,9};
    int digitsSize =3;
    int* r = digitsSize;
    int *plus = plusOne(digits,digitsSize,r);
    for(int i=0;i<4;i++){
        printf("%d",plus[i]);
    }
}