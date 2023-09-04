#include<stdio.h>
#include<stdlib.h>
char * addBinary(char * a, char * b){
    char carry = '0';
    int len_a = 2; // calculating length of a binary
    int len_b = 2; // calculating length of b binary
    int min = 1 ;// finding the least length of binary number and assigning to min
    int max =  2 ;// finding the least length of binary number and assigning to min
    char *sum= malloc (sizeof (char) * max);
    for(int i=max-1;min!=0;i--){
       int j= min--;
        
        if(a[i]=='1'&&b[j]=='1'){ // checks the bits are 1s and if carry also 1 then sum bit is 1 and carry is one else sum is 0 and carry is 1
            if(carry=='1'){
                sum[i]='1';
                carry='1';
            }
            else{
                sum[i]='0';
                carry='1';
            }
        }
        else if((a[i]=='0'&&b[j]=='1')||(a[i]=='0'&&b[j]=='1')){
            if(carry=='1'){
                sum[i]='0';
                carry='1';
            }
            else{
                sum[i]='0';
                carry='0';
            }
        }
        else if(a[i]=='0'&&b[j]=='0'){
            if(carry=='1'){
                sum[i]='1';
                carry='0';
            }
            else{
                sum[i]='0';
                carry='0';
            }
        }
        printf("%c",sum[i]);
        if(carry=='1'&& i==0){
            char *sum2= malloc (sizeof (char) * max+1);
            sum2[0]='1';
            for(int i=1;i<=max;i++){
                sum2[i]=sum[i];
                printf("%c",sum[i]);
            }
            return sum2;
        }
    }
    return sum;
    

}
void main(){
    char a[]= "11";
    char b[]= "1";
    char *res=addBinary(a,b);
    printf("%s",res);
}