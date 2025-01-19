#include <stdio.h>

int main() {
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    bool result;
    if(num1>num2){
        result = true;
    }
    else{
        result = false;
    }
    printf("%s",result);
    return 0;
}