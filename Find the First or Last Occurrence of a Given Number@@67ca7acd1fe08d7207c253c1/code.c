#include<stdio.h>

findOccurence(int arr , int n, int target , char mode){
    if(mode == 'F'){
        for(int i=0; i<n; i++){
            if(arr[i] == target){
                return i;
            }
        }
    }else{
        for(int i =n-1; i>=1; i--){
            if(arr[i] == target){
                return i;
            }
        }
    }
}