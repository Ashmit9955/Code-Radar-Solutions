#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int HS = arr[0];
    int H = 0;
    int LS = arr[0];
    int L = 0;
    for(int i=1; i<n; i++){
        if(arr[i] > HS){
            HS = arr[i];
            H++;
        }else if(arr[i] < LS){
            LS = arr[i];
            L++;
        }
    }
    printf("%d %d",H,L);
    return 0;
}