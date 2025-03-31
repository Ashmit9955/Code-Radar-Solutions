#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //defining max prod variable here
    int maxProd = 0;
     for(int i=0; i<n; i++){
        int prod = 1;
        for(int j=i+1; j<n; j++){
            prod = arr[i] * arr[j];
            if(prod > maxProd){
                maxProd = prod;
            }
        }
    }
    printf("%d",maxProd);

    return 0;
}