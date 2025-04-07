#include<stdio.h>
#include<math.h>
int main(){
    int decimal , p;
    scanf("%d %d",&decimal , &p);

    int power = 1;
    int check = 0;
    int binary = 0;
    
    while(decimal > 0){
        int LD = decimal%2;
        decimal = decimal / 2;
        binary = binary + LD * power;
        power = power * 10;
        check++;
    }
    if(check - p == 1){
        printf("%d",LD);
    }else if(check - p == 2){
        printf("%d",LD);
    }
    

    return 0;
}