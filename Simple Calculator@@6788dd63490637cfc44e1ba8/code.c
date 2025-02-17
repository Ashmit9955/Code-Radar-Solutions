#include <stdio.h>
int main(){
    float x,y;
    char z;
    scanf("%f%f",&x,&y);
    scanf(" %c",&z);
    switch(z){
        case '+':
        printf("%f",x+y);
        break;
        case '-':
        printf("%f",x-y);
        break;
        case '*':
        printf("%f",x*y);
        break;
        case '/':
        printf("%f",x/y);
        break;
    }
    return 0;
}