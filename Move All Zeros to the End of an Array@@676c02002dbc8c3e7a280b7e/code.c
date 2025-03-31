#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //
    for(int i=n-2; i>=0; i--){
        if(arr[i] == 0){
            //swap
            int index = i;
            while(index<=n-2){
                int temp = arr[index];
                arr[index] = arr[index+1];
                arr[index+1] = temp;
                index++;
            }
        }
        }
        //print the array
        for(int i=0; i<n; i++){
            printf("%d ",arr[i]);
        }
         return 0; 
    }