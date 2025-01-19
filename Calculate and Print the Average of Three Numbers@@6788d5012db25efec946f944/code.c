#include <stdio.h>

int main() {
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    float average = (num1+num2+num3)/3;
    printf("Average: %f",average);
    return 0;
}