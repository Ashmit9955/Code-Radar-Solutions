#include <stdio.h>
int main(){
    int x,y;
    char z;
    scanf("%d%d",&x,&y);
    scanf(" %c",&z);
    switch(z){
        case '+':
        printf("%d\n",x+y);
        break;
        case '-':
        printf("%d\n",x-y);
        break;
        case '*':
        printf("%d\n",x*y);
        break;
        case '/':
        printf("%d\n",x/y);
        break;
    }
    return 0;
}