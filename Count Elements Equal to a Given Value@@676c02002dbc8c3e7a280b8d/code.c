#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    int arr[n];
    //taking array input
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //
    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i] == k){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}