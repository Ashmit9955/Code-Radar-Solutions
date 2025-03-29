#include<stdio.h>
int findKthMissing(int arr[] , int n, int k){
    for(int i=arr[0], i<=arr[n-1], i++){
        int check = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == j){
                check = 1;
                break;
            }
        }
        if(check == 0){
            count++;
            if(count>=k){
                return i;
            }
        }
    }
}