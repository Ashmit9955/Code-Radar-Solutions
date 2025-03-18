#include <stdio.h>
int Sum(int n){
    int x = 0;
    int sum = 0;
    while(n>0){
        x = n%10;
        n = n/10;
        sum += x;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0; i<n;i++){
        printf("%d",Sum(arr[i]));
    }
}