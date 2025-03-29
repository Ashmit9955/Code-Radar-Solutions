#include <stdio.h>
#include<limits.h>

void selectionSort(int arr[] ,int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i; j<n; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        //swap
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
void printArray(int arr[] , int n){
    //print the arrar here
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}