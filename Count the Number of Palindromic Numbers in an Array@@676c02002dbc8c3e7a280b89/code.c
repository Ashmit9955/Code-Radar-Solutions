#include <stdio.h>
    int isP(int n){
        int temp = 0;
        int n2 = n;
        while(n2>0){
        int L = n2%10;
        temp = temp*10 + L;   
        n2 = n2/10;
        }
        if(temp == n){
            return 1;
        }else{
            return 0;
        }
    }
    int main(){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        int sum = 0;
        for(int i=0; i<n; i++){
            sum+= isP(arr[i]);
        }
        printf("%d",sum);
        return 0;
    }
