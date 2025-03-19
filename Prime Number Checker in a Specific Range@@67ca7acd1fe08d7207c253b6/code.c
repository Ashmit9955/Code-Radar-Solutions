#include<stdio.h>
void isPrime(int n , int m){
    for(int i=n; i<=m; i++){
        int result = 1;
        for(int j = 2; j<i; j++){
            if(i%j == 0){
                result = -1;
            }
        }
        if(result == 1){
            printf("%d ",i);
        }
    }
}