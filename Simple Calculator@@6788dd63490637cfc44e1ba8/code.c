#include <stdio.h>
int main(){
    int x,y;
    char z;
    scanf("%d%d",&x,&y);
    scanf(" %c",&z);
    if(z == '+'){
        printf("%d",x+y);
    }
    else if(z == '-'){
        printf("%d",x-y);
    }
    else if(z == '*'){
        printf("%d",x*y);
    }
    else if(z == '/'){
        if(y>0){
            printf("%d",x/y);
        }else{
            printf("error");
        }
    }
    return 0;
}