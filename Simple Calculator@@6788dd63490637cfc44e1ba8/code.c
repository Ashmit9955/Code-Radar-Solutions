#include <stdio.h>
int main(){
    double x,y;
    char z;
    scanf("%lf%lf%c",&x,&y,&z);
    printf("%lf%lf&c",x,y,z);
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