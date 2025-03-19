#include<stdio.h>
void printPrimesInRange(int n , int m){
    int count = 0;
    for(int i=n; i<=m; i++){
        int result = 1;
        for(int j = 2; j<i; j++){
            if(i%j == 0){
                result = -1;
            }
        }
        if(result == 1 && i>=2){
            printf("%d ",i);
            count++;
        }
    }
    if(count == 0){
        printf("No prime numbers");
    }
}