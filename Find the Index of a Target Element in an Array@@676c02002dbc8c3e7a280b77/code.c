#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int result = -1;
    for(int i =0;i<n; i++){
        if(arr[i] == target){
            result = i;
        }
    }
    printf("%d",result);
    return 0;
}