#include<stdio.h>

int SecondLargest(int arr[]){
    int Largest = INT_MIN;
    int SLargest = INT_MIN;
    for(int i=0; i < arr.length ; i++){
        if(arr[i] > Largest){
            Largest=arr[i];
        } else if(arr[i] != arr[i] > SLargest){
            SLargest = arr[i];
        }
    }
    return SLargest;
}
