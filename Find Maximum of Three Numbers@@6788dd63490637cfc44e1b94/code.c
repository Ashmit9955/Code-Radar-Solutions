#include <stdio.h>


int main() {
    int n,p,q;
    scanf("%d%d%d",&n,&p,&q);
    if(n>p && n>q){
        printf("%d",n);
    }
    else if(p > n && p > q){
        printf("%d",p);
    }else{
        printf("%d",q);
    }
    return 0;
}