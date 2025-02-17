#include<stdio.h>
int main()
{
    float a,b;
    char x;
    scanf("%f%f",&a,&b);
    scanf(" %c",&x);
    switch(x){
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
        if(y>0){
            printf("%.0f",x/y);
        }else{
            printf("error");
        }
        break;
    }
    return 0;
}