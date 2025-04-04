#include<stdio.h>
int main(){
    char ch1[20] , ch2[20];
    fgets(ch1,sizeof(ch1),stdin);
    fgets(ch2,sizeof(ch2),stdin);
    char ch3[50] = ch1+ch2;
    printf("%s",ch3);
    return 0;
}