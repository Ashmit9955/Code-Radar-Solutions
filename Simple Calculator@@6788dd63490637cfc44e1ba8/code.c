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
        if(y>0){
        printf("%.0f",x/y);
        }else{
            printf("error");
        }
        break;
        
    }
    return 0;
}