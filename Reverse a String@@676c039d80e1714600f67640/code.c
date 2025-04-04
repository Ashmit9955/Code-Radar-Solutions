#include<stdio.h>
#include <string.h>
int main(){
    char ch[20];
    scanf("%s",&ch);
    int len = strlen(ch);
    for(int i=0; i<len/2; i++){
        char temp = ch[i];
        char ch[i] = char[len - 1 - i];
        char[len-1-i] = temp;
    }
    printf("%s",ch);
}