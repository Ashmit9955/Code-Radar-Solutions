#include <stdio.h>
int main(){
    int c,s;
    scanf("%d%d",&c,&s);
    if((c-s)>0){
        printf("Loss");
    }
    else if((c-s)<0){
        printf("Profit");
    }else{
        printf("No Profit No Loss");
    }
    return 0;
}