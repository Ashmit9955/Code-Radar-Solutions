#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int L = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0 && arr[i] > L){
            L = arr[i];
        }
    }
    if(L == INT_MIN){
        printf("%d",-1);
    }else{
        printf("%d",L);
    }
    return 0;
}