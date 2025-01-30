#include <stdio.h>

int main() {
   int n,p,q;
   scanf("%d%d%d",&n,&p,&q);
   if(n<(p+q) && p< (n+q) && q<(n+p)){
    printf("Valid");
   }else{
    printf("Invalid");
   }

    return 0;
}