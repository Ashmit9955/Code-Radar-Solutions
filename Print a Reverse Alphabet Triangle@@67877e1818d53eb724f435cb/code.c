#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 65; i < 65+n; i++){
        int x = 65;
        for(int j = 65+n; j>= i;j--){
            printf("%c ",x++);
        }
        printf("\n");
    }
    return 0;
}