#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
// Input complete
    int Smallest = 555555;
    int num1 = 444;
    int num2 = 444;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=i){
                if(abs(arr[i] - arr[j]) < Smallest){
                    Smallest = abs(arr[i] - arr[j]);
                    num1 = i;
                    num2 = j;
                    break;
                }
            }
        }
    }
    if(n == 1){
        printf("%d",-1);
    }else if(arr[num1] < arr[num2]){
        printf("%d %d",arr[num1] ,arr[num2]);
    }else if(arr[num2] <arr[num1]){
        printf("%d %d",arr[num2],arr[num1]);
    }
    return 0;
}