#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    for(int i =1; i<=n; i++){
        // inner loop for spaces
        for(int k = n; k>=i; k--){
            printf(" ");
        }

        // inner loop
        for(int j =1; j<=i; j++){
            printf("%d ",j);
        } 
        printf("\n");
    }
    return 0;
}