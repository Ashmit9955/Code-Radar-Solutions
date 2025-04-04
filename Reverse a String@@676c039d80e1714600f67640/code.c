#include<stdio.h>
int main(){
    char ch[20];
    fgets(ch, sizeof(ch), stdin);
    printf("%s",ch);
}