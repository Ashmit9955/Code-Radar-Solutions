#include <stdio.h>
int searchInRotatedArray(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i] > arr[i+1]){
            return i+1;
        }
    }
    return -1;
}