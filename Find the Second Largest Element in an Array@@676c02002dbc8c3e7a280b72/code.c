#include<stdio.h>
#include <limits.h>
int main(){
    int Largest = -100000;
    int SLargest = -100000;
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i < n; i++){
    scanf("%d",&arr[i]);
   }
   for(int i = 0 ; i<n ; i++){
    if(arr[i] > Largest){
        SLargest = Largest;
        Largest = arr[i];
    }else if(arr[i] != Largest && arr[i] > SLargest){
        SLargest = arr[i];
    }
   }
   if(SLargest != -100000){
        printf("%d",SLargest);
   }
}