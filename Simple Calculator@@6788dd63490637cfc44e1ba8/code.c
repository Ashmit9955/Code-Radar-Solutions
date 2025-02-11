#include <stdio.h>
int main(){
    double x,y;
    char z;
    scanf("%lf%lf",&x,&y);
    scanf(" %c",&z);
    switch(z){
        case '+':
        printf("%d",int(x+y));
        break;
        case '-':
        printf("%d",int(x-y));
        break;
        case '*':
        printf("%d",int(x*y));
        break;
        case '/':
        printf("%d",int(x/y));
        break;
    }
    return 0;
}