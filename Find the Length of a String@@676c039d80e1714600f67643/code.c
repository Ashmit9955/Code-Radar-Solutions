#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    fgets(ch , sizeof(ch) , stdin);
    int len = strlen(ch);
    int count = len;
    for(int i=0; i<len; i++){
        if(ch[i] == " "){
            count--;
        }
    }
    printf("%d",count);
    return 0;
}