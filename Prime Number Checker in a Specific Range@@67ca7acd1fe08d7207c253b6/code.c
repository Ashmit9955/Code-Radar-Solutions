#include<stdio.h>
int isPrime(int n){
    if(n>=2){
        for(int i=2; i<=n-1; i++){
            if(n%i == 0){
                return 0;
            }
        }
        return n;
    }else{
        return 0;
    }
}