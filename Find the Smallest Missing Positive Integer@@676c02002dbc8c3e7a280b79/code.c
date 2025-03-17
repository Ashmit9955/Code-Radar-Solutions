#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int num = -2;
    for(int i=1; i<=n; i++){
        int result = -1;
        for(int j =0; j<n; j++){
            if( i == arr[j]){
                result = 1;
            }
        }
        if(result == -1){
            num = i;
            break;
        }
        printf("%d",num);
    }
    return 0;
}