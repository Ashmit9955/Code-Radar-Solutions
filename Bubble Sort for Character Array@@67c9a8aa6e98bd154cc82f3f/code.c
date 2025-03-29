#include<stdio.h>
void bubbleSort(char arr[] , int n){
    for(int i=0; i<n-1;i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j+1] < arr[j]){
                //swap
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(char arr[] , int n){
    for(int i=0;i<n; i++){
        printf("%c ",arr[i]);
    }
}