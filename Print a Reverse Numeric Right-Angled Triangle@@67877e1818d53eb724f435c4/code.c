#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a = 1;
    for(int i= n; i > 1; i--){
        a =1;
        for(int j = 2; j<=n ; j++){
            printf("%d ",a++);
        }
        printf("\n");
    }
    return 0;
}
