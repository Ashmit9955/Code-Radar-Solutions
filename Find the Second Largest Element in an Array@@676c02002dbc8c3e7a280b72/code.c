#include<stdio.h>
#include <limits.h>
int SecondLargest(int arr[] , int n){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
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
    return SLargest;

}
int main(){
   SecondLargest();   
}