#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    for(int i =65; i < 65+n; i++){
        for(int j = 65; j < 65+n; j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}