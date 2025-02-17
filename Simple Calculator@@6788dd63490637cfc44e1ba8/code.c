#include <stdio.h>
int main(){
    float x,y;
    char z;
    scanf("%f%f",&x,&y);
    scanf(" %c",&z);
    switch(z){
        case '+':
        printf("%.0f",x+y);
        break;
        case '-':
        printf("%.0f",x-y);
        break;
        case '*':
        printf("%.0f",x*y);
        break;
        case '/':
        printf("%.0f",x/y);
        break;
    }
    return 0;
}