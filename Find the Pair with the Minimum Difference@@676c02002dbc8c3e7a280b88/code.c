#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int Ssum = 0;
    int num1 = -2;
    int num2 = -2;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                continue;
            }else if(i != j){
                if((arr[i] - arr[j]) < Ssum){
                    Ssum = arr[i] - arr[j];
                    num1 = i;
                    num2 = j;
                }
            }
        }
    }
    printf("%d %d",arr[num1],arr[num2]);
    return 0;
}