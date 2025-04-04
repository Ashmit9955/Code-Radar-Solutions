#include<stdio.h>
int main(){
    chr ch[20];
    fgets(ch, sizeof(ch), stdin);
    printf("%s",ch);
}