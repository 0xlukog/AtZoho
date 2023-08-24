#include<stdio.h>
#include<stdbool.h>

int pow(int base,int power){
    int res=1;
    for(int i=1;i<=power;i++){
        res*=base;
    }
    return res;
}

bool isPimeNumber(int n){
    if(n==1){
        return true;
    }
    for(int i =2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void printPrime(int n){
    for(int i=1;i<=n;i++){
        if(isPimeNumber(i)){
            printf("%d\n",i);
        }
    }
}

void printComposite(int n){
    for(int i=1;i<=n;i++){
        if(!isPimeNumber(i)){
            printf("%d\n",i);
        }
    }    
}
void main(){
    // printf("%d",printPrime(10));
    printPrime(100);

}