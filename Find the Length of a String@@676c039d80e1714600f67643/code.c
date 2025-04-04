#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    int count =0;
    fgets(ch , sizeof(ch) , stdin);
    int len = strlen(ch);
    printf("%d",len);
    return 0;
}