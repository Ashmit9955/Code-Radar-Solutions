#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }     
    int temp = arr[n-1];   
    //solving
    for(int i=0; i<n; i++){
        int L = -111111;
        for(int j=i+1; j<n; j++){
            if(arr[j] > L){
                L = arr[j];
            }
        }
        //swap
        arr[i] = L;
    }
    arr[n-1] = -1;
    //Array printing
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}