#include <stdio.h>
int main(){
    int x,y;
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
        if(y>0){
        printf("%d",x/y);
        }else{
            printf("error");
        }
        break;
        
    }
    return 0;
}