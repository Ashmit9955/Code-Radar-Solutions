#include <stdio.h>

int main() {
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    float average = float(num1+num2+num3)/3;
    printf("Average: %.2f",average);
    return 0;
}