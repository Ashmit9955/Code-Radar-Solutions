#include <stdio.h>

int main() {
    float num1,num2,num3;
    scanf("%f%f%f",&num1,&num2,&num3);
    float average = (num1+num2+num3)/3;
    printf("Average: %.2f",average);
    return 0;
}