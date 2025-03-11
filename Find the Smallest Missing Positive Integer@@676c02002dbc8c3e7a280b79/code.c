#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
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
    // Now we have the Lowest value and now we will find the Largest value
    int Largest = INT_MIN;
    for(int i =0; i<n-1;i++){
        if(arr[i] > Largest){
            Largest = arr[i];
        }
    }
    // now we got the Largest value also
    int final = -1;
    for(int i = Smallest ; i<=n ; i++ ){
        int result = -1;
        for(int j=Smallest ;j<=Largest ; j++){
            if(arr[j] == arr[i]){
                result = 1;
                break;
            }
      }
      if(result == -1){
            final = i;
            break;
        }
    }
    printf("%d",final);
    return 0;
}