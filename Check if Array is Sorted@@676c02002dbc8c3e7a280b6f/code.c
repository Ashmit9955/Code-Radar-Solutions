#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int result = 1;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1] ){
            result = -1;
        }
    }
    if(result == 1){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    return 0;
}