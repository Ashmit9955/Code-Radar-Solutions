#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int temp[k];
    int index = 0;
    for(int i = N-k; i<=N-1; i++){
        temp[index++] = arr[i];
    }
    // shifting the remaining numbers by k positions
    int x = n-k-1;
    while(x>=0){
        arr[x+k] = arr[x];
        x--;
    }

    for(int i=0; i < k ; i++){
        arr[i] = temp[i];
    }
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i])
    }
    return 0;
}