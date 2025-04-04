#include<stdio.h>
int main(){
    char ch[20];
    fgets(ch, sizeof(ch), stdin);
    for(int i=sizeof(ch) - 1; i>=0; i--){
        printf("%c",ch[i]);
    }
}