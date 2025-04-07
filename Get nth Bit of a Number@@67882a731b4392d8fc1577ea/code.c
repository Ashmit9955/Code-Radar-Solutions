#include<stdio.h>
#include<math.h>
int main(){
    int decimal , p;
    scanf("%d %d",&decimal , &p);

    int power = 1;
    int binary = 0;
    while(decimal > 0){
        int LD = decimal%2;
        decimal = decimal / 2;
        binary = binary + LD * power;
        power = power * 10;
    }
    printf("%d",binary);

    return 0;
}