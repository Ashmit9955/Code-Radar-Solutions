#include<stdio.h>
void insertionSort(char arr[] , int n){
    for(int i=1; i<n; i++){
        while(arr[i] < arr[i-1]){
            //swap
            char temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
            //
            i--;
        }
    }
}

void printArray(char arr[] , int n){
    for(int i=0; i<n; i++){
        printf("%c ",arr[i]);
    }
}