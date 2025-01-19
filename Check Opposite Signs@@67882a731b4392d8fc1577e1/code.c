#include <stdio.h>


int main() {
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    float r = num1/num2;
    if(!(r<0)){
        printf("False");
    }
    else{
        printf("True");
    }
    return 0;
}