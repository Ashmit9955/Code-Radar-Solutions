#include<stdio.h>
void insertionSort(int arr[] , int n){
    for(int i=1; i<=n-1; i++){
        while(arr[i] < arr[i-1] && i>0){
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
            i--;
        }
    }
}
void printArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}