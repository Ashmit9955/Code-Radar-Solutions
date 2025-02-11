#include <stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>y){
        printf("First");
    }
    else if(y>x){
        printf("Second");
    }
    else{
        printf("Equal");
    }
    return 0;
}