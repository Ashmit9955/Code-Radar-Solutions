#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int temp[n];
    for(int i=0; i<n; i++){
        int count =0;
        for(int j =0; j<n; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        temp[i] = count;
    }
    int LargestCount = 0;
    int result = arr[0];
    for(int i =0; i<n; i++){
        if(temp[i] > LargestCount){
            LargestCount = temp[i];
            result = arr[i];
        }
    }
    printf("%d",result);
    return 0;
}