#include<stdio.h>
int isPrime(int n){
    int x = 1;
    for(int i=2;i<=n-1; i++){
        if(n%i == 0){
            x = 0;
            break;
        }
    }
    if(n == 0 || n == 1){
        return 0;
    }else{
        return x;
    }
}
