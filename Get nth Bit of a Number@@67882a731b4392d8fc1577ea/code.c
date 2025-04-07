#include<stdio.h>
#include<math.h>
int main(){
    int decimal , p;
    scanf("%d %d",&decimal , &p);

    int power = 1;
    int check = 0;
    int binary = 0;
    int result =0;
    while(decimal > 0){
        int LD = decimal%2;
        decimal = decimal / 2;
        binary = binary + LD * power;
        power = power * 10;
        if(check == p){
            result = LD;
            break;
        }
        check++;
    }
    if(result >=0){
        printf("%d",LD);
    }else{
        printf("%d",0);
    }
    return 0;
}