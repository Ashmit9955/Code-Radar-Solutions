#include <stdio.h>
#include <math.h>
int main(){
    int x ,y;
    scanf("%d %d",&x,&y);
    if(y == pow(x,0.5)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}