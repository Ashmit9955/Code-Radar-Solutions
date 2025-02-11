#include <stdio.h>
int main(){
    double x,y;
    char z;
    scanf("%d%d",&x,&y);
    scanf(" %c",&z);
    switch(z){
        case '+':
        printf("%d",x+y);
        break;
        case '-':
        printf("%d",x-y);
        break;
        case '*':
        printf("%d",x*y);
        break;
        case '/':
        printf("%d",x/y);
        break;
    }
    return 0;
}