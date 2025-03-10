// Online C compiler to run C program online
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
    int temp[k];
    int index = 0;
    for(int i = N-k; i<=N-1; i++){
        temp[index++] = arr[i];
    }
    // shifting the remaining numbers by k positions
    int x = N-k-1;
    while(x>=0){
        arr[x+k] = arr[x];
        x--;
    }

    for(int i=0; i < k ; i++){
        arr[i] = temp[i];
    }
    
    // Printing new array
    for(int i=0; i <N; i++){
        printf("%d\n",arr[i]);
    }

}