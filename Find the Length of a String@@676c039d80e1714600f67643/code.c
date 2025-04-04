#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    fgets(ch , sizeof(ch) , stdin);
    printf("%d",strlen(ch));
    return 0;
}