#include <stdio.h>
int main(){
    float x,y;
    char z;
    scanf("%f%f",&x,&y);
    scanf(" %c",&z);
    switch(z){
        case '+':
        printf("%.0f",a+b);
        break;
        case '-':
        printf("%.0f",a-b);
        break;
        case '*':
        printf("%.0f",a*b);
        break;
        case '/':
        if(y>0){
        printf("%.0f",a/b);
        }else{
            printf("error");
        }
        break;
        
    }
    return 0;
}