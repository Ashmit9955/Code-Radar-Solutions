#include <stdio.h>

int main() {
    int n,p,q;
    scanf("%d%d%d",&n,&p,&q);
    int max;
    if(n>p && n >q){
        max = n;
    }
    else if(p>n && p >q){
        max = p;
    }else{
        max = q;
    }
    // 
    if(max > (n+p) || max>(n+q) || max>(p+q)){
        printf("Invalid");
    }else{
        printf("Valid");
    }



    return 0;
}