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
    int num1 = 0;
    int num2 = 0;
    int Smallest = 222222;
    for(int i=0;i<n-1; i++){
        for(int j=i+1; j<n ;j++){
            if(abs(arr[i] - arr[j]) < Smallest){
                Smallest = abs(arr[i] - arr[j]);
                num1 = i;
                num2 = j;
            }
        }
    }   
    printf("%d %d",arr[num1],arr[num2]);
    return 0;
}