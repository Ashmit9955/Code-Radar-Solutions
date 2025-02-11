#include <stdio.h>
#include <math.h>
int main(){
    int x ,y;
    scanf("%d%d",&x,&y);
    if(y == sqrt(x)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}