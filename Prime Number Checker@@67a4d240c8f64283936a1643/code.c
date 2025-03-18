#include<stdio.h>
int isPrime(int n){
    int x = 1;
    for(int i=2;i<=n-1; i++){
        if(n%i == 0){
            x = 0;
            break;
        }
    }
    return x;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d",isPrime(arr[i]));
    }
    return 0;
}