#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char ch[20];
    fgets(ch,sizeof(ch),stdin);
    ch[strcspn(ch,"\n")] = '\0';
    printf("%s",toupper(ch));
    return 0;
}