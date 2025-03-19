#include<stdio.h>
int isPrime(int n){
    if(n>=2){
        for(int i=2; i<=n-1; i++){
            if(n%i == 0){
                return 0;
            }
        }
        return n;
    }else{
        return 0;
    }
}
int main(){
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    int arr[4];
    for(int i=0; i<=3; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n1; i<=n2; i++){
        if(isPrime(arr[i])){
            printf("%d",arr[i]);
        }
    }
    return 0;
}