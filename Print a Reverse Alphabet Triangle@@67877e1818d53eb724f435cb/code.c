#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        int x = 65;
        for(int j =n; j>=i; j--){
            printf("%c ",x++);
        }
        printf("\n");
    }
    return 0;
}