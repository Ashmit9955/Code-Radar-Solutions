#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int mcount = 0;
    int Element = 0;
    for(int i=0; i<n;i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                if(count > mcount){
                    mcount = count;
                    Element = arr[i];
                }else if(count == mcount){
                    if(arr[i] < Element){
                        Element = arr[i];
                    }
                }
            }
        }
    } 
    printf("%d",Element);
    return 0;
}