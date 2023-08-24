#include<stdio.h>
void main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int max =(a>b)?a:b;
    for(int i=2;i<a*b;i++){
        if((max*i)%a==0 && (max*i)%b==0){
            printf("%d",max*a);
            break;
        }
    }
}