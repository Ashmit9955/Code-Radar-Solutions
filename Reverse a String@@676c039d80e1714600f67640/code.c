#include<stdio.h>
#include <string.h>
int main(){
    char ch[20];
    // scanf("%s",&ch);
    int len = strlen(ch);
    fgets(ch,st sizeof(ch),stdin);
    for(int i=0; i<sizeof(ch)/2; i++){
        char temp = ch[i];
        ch[i] = ch[len - 1 - i];
        ch[len-1-i] = temp;
    }
    printf("%s",ch);
}