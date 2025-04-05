#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    char newch[20];
    fgets(ch,sizeof(ch),stdin);
    char ch1,ch2;
    scanf("%c %c",ch1,ch2);
    int len = strlen(ch);
    for(int i=0; i<len; i++){
        if(ch[i] == ch1){
            newch[i] = ch2;
        }else{
            newch[i] = ch[i];
        }
    }
    printf("%s",newch);
    return 0;
}