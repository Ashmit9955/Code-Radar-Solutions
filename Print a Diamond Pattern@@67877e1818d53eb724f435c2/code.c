#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        for(int j =1; j<= n-i; j++){
            printf(" ");
        }
        for(int k = 1; k<=(i*2)-1 ; k++){
            printf("*");
        }
        printf("\n");
        for(int m = n; m>=1 ; m--){
        if(i!= 1){    for(int p = n; p>=m; p--){
                printf(" ");
            }
            for(int q = i; q<= (i*2) -1; q++){
                printf("*");
            }
        }else{
            continue;
        }
        }
    }
    return 0;
}