#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 65; i < 65+n; i++){
        int x = 65;
        for(int j = n; j>= 1;j--){
            printf("%d",x++);
        }
    }
    return 0;
}