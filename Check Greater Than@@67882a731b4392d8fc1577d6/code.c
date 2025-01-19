#include <stdio.h>

int main() {
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int result;
    if(num1>num2){
        result = 1;
    }
    else{
        result = 0;
    }
    printf("%s",result);
    return 0;
}