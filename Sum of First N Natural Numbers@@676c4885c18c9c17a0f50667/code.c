#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum1 = 0;
    for(int i = 1; i<=n; i++){
        sum1+=i;
    }
    printf("%d",sum1);
    return 0;
}