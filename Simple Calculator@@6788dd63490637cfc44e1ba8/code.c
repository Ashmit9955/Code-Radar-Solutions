#include <stdio.h>
int main(){
    double x,y;
    char z;
    scanf("%lf%lf",&x,&y);
    scanf(" %c",&z);
    switch(z){
        case '+':
        printf("%lf",x+y);
        break;
        case '-':
        printf("%lf",x-y);
        break;
        case '*':
        printf("%lf",x*y);
        break;
        case '/':
        printf("%lf",x/y);
        break;
    }
    return 0;
}