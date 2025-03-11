#include <stdio.h>
#include<limits.h>
int main(){
    int n;
    int arr[n-1];
    for(int i=0; i<n-1; i++){
        scanf("%d",&arr[i]);
    }
    int Smallest = INT_MAX;
    for(int i = 0; i<n-1; i++){
        if(arr[i] < Smallest){
            Smallest = arr[i];
        }
    }
    int result = 1;
    // Now we have the Lowest value
    for(int i = Smallest ; i<n ; i++ ){
        if(arr[i] == i){
            result = 1;
        }
    }else{
        result = -1;
    }

    return 0;
}