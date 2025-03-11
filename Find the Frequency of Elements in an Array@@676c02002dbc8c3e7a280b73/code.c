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
        int count  = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        temp[i] = count;
    }
    int final[n]; 
    for(int j = 0;j <n; j++){
        if(temp[j] >1){
            final[j] = temp[j];
            
            break; 
        }
    }
    return 0;
}