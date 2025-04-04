#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    fgets(ch , sizeof(ch) , stdin);
    int len = strlen(ch);
    for(int i=0; i<len; i++){
        if(ch[i] == ' '){
            len--;
        }
    }
    printf("%d",len);
    return 0;
}