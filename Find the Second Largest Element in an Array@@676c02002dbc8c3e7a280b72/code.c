#include<stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        int x;
        scanf("%d",&x);
        arr[i] = x;
    }
    int Largest = INT_MIN;
    int SLargest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > Largest){
            SLargest = Largest;
            Largest = arr[i];
        }else if(arr[i] < Largest && arr[i] > SLargest && SLargest != Largest){
            SLargest = arr[i];
        }else{
            SLargest = -1;
        }
    }
    printf("%d",SLargest);
    
}