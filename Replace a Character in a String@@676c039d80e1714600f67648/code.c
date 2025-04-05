#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    fgets(ch,sizeof(ch),stdin);
    char ch1,ch2;
    scanf("%c %c",ch1,ch2);
    int len = strlen(ch);
    for(int i=0; i<len; i++){
        if(ch[i] == ch1){
            ch[i] = ch2;
        }
    }
    printf("%s",ch);
    return 0;
}