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
    // Now we have the Lowest value
    for(int i = Smallest ; i<n-1 ; i++ ){
        int result = -1;
        for(int j=Smallest; j<=n;j++){
            if(arr[j] == arr[i]){
                result = 1;
                break;
            }
        }
        if(result == -1){
           printf("%d",result);
        }
    }
    return 0;
}