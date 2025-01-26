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
    }
    for(int m = 1; m <= n; m++){
        for(int p = 1; p <= m; p++){
            printf(" ");
        }
        for(int q = 0; q<= 2*(n-m)-2; q++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}