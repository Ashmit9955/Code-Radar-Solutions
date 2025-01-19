#include <stdio.h>


int main() {
    float num1,num2;
    scanf("%f%f",&num1,&num2);
    int r = num1/num2;
    if(r>0){
        printf("False");
    }
    else{
        printf("True");
    }
    return 0;
}