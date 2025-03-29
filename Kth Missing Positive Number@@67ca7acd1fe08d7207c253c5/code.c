#include<stdio.h>
int findKthMissing(int arr[] , int n, int k){
    int count =0;
    for(int i=arr[0]; i<=2*arr[n-1]; i++){
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