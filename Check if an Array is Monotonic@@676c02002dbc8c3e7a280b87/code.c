#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int result = 1;
    for(int i =0; i<n-1; i++){
        if(arr[i] <= arr[i+1]){
            result = 1;
        }else{
            result = -1;
        }
    }
    if(result == -1){
        for(int i =0; i< n-1; i++){
            if(arr[i] >= arr[i+1]){
                result = 1;
            }else{
                result = -1;
                break;
            }
        }
    }
    

    if(result == 1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}