#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }        
    //solving
    for(int i=0; i<n; i++){
        int L = -111111;
        for(int j=i; j<n; j++){
            if(arr[i] > L){
                L = arr[i];
            }
        }
        //swap
        arr[i] = L;
    }
    //Array printing
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}