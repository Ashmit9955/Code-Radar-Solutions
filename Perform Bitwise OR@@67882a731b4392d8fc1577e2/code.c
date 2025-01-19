#include <stdio.h>

int main() {
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int n = num1 | num2;
    printf("%d",n);
    return 0;
}