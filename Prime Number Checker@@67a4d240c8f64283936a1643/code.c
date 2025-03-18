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
    int x = 0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d",&x);
        printf(isPrime(x));
    }
    return 0;
}