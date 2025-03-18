#include<stdio.h>
int Check(int n,int arr[n]){
    for(int i=0; i<n ; i++){
        int count  = 0;
        for(int j=i; j<n ; j++){
            if(arr[i] == arr[j]){
                count++;
                if(count > 1){
                    return arr[i];
                }
            }
        }
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",Check(n,arr));
}