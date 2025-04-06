#include<stdio.h>
#include<string.h>
#include<ctype.h>
int fun(char* str){
    int len =strlen(str);
    for(int i=0; i<len; i++){
        int count  =0;
        for(int j=0; j<len; j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        if(count ==1){
            return i;
        }
    }
    return -1;
}
int main(){
    char ch[30];
    fgets(ch,sizeof(ch); stdin);
    ch[strcspn(ch,"\n")] = '\0';
    int index = fun(ch);
    if(ch == -1){
        printf("%c",'-');
    }else{
        printf("%c",ch[index]);
    }
    return 0;
}