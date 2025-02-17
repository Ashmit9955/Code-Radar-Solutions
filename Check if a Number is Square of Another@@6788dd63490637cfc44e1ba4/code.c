#include <stdio.h>
#include <math.h>

int main(){
    int x ,y;
    scanf("%d %d",&x,&y);
    int a = pow(x,0.5);
    if(a == y){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}