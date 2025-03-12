#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int index = 0;
    int result = 1;
    int temp[n/2];
    for(int i=0; i<n;i++){
        for(int j=i; j < n-1; j++){
            if(arr[i] > arr[j+1]){
                result = 1;
            }else{
                result = -1;
                break;
            }
        }
        if(result == 1){
            temp[index] = arr[i];
            index++;
        }
    }
    for(int i= 0; i<=index; i++){
        printf("%d",temp[i]);
    }
    return 0;
}