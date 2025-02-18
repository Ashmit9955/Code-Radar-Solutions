#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if((1<<31) & num){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}