#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i= 1; i<=n; i++){
        for(int j =n; j >i; j--){
            printf(" ");
        }
        for(int k =1; k<=i ; k++){
            printf("%d",k);
        }
        for(int m = i-1; m>=1;m--){
            printf("%d",m);
        }
        printf("\n");
    }
    return 0;
}