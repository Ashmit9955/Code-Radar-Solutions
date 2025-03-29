#include<stdio.h>
#include<limits.h>

void selectionSort(char arr[] , int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        //swap
        char temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
void printArray(char arr[],int n){
    for(int i=0; i<n; i++){
        printf("%c",arr[i]);
    }
}