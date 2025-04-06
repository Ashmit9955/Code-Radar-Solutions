#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char ch[20];
    fgets(ch,sizeof(ch),stdin);
    ch[strcspn(ch,"\n")] = '\0';
    for(int i=0; i<strlen(ch); i++){
        printf("%c",toupper(ch[i]));
    }
    return 0;
}