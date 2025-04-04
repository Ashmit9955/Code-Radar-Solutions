#include<stdio.h>
#include <string.h>
int main(){
    char ch[20];
    scanf("%s",&ch);
    for(int i=sizeof(ch) - 1; i>=0; i--){
        printf("%c",ch[i]);
    }
}