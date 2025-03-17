#include<stdio.h>
int FindNum( int n, int arr[]){
    for(int i=1;i<=n ; i++){
        int result = -1;
        for(int j = 0; j<n; j++){
            if(i == arr[j]){
                result = 1;
                break;
            }
        }
        if(result == -1){
            return i;
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",FindNum(n,arr));
    return 0;
}