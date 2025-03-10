#include <stdio.h>
#include <limits.h>

int main(){
    int Largest = INT_MIN;
    int Smallest = INT_MAX;
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0; i<n; i++){
        if(arr[i] > Largest){
            Largest = arr[i];
        }
    }
    for(int i =0; i <n; i++){
        if(arr[i] < Smallest){
            Smallest = arr[i];
        }
    }
    printf("%d %d",Smallest,Largest);
    return 0;
}