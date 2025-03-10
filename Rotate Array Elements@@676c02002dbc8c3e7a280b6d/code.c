#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k = k % N;
    int temp[k];
    for(int i = N-k; i<=N-1; i++){
        temp[i-k-1] = arr[i];
    }
    // shifting the remaining numbers by k positions
    for(int j = N-1; j>=0; j--){
        arr[j] = arr[j-2];
    }
    for(int i=0; i < k ; i++){
        arr[i] = temp[i];
    }
    // Printing new array
    for(int i=0; i <N; i++){
        printf("%d\n",arr[i]);
    }
 
}