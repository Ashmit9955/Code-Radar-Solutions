#include <stdio.h>
#include <math.h>

int main(){
    float x ,y;
    scanf("%d %d",&x,&y);
    if(pow(x,0.5) == y){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}