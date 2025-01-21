#include <stdio.h>

int main() {
    int num1;
    scanf("%d",&num1);
    if(num1>0){
        printf("Positive");
    }
    else if(num1<0){
        printf("Negative");
    }
    else{
        printf("Zero");
    
    }
    return 0;
}