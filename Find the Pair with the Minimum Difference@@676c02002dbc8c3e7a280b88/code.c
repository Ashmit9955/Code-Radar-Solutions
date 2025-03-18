#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //
    int num1 = -90;
    int num2 = -90;
    int Smallest = 222222;
    for(int i=0;i<n-1; i++){
        for(int j=i+1; j<n ;j++){
            if(abs(arr[i] - arr[j]) < Smallest){
                Smallest = abs(arr[i] - arr[j]);
                num1 = i;
                num2 = j;
            }else if(abs(arr[i] - arr[j]) == Smallest){
                if(arr[i] < arr[num1] && arr[j] < arr[num2]){
                    num1 = i;
                    num2 = j;
                }
            }
        }
    }   
    if(n == 1){
        printf("%d",-1);
    }else if(arr[num1] < arr[num2]){
        printf("%d %d",arr[num1],arr[num2]);
    }else if(arr[num1] > arr[num2]){
        printf("%d %d",arr[num2],arr[num1]);
    }
    return 0;
}