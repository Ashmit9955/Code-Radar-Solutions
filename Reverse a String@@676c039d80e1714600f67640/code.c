#include<stdio.h>
#include <string.h>
int main(){
    char ch[20];
    fgets(ch,sizeof(ch),stdin);
    int len = strlen(ch);
    for(int i=0; i<len/2; i++){
        char temp = ch[i];
        ch[i] = ch[len - 1 - i];
        ch[len-1-i] = temp;
    }
    printf("%s",ch);
}