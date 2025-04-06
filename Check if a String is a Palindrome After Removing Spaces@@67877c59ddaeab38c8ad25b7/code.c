#include <stdio.h>
#include<string.h>
#include <ctype.h>
int isPalin(char* ch){
    int len  = strlen(ch);
    for(int i=0; i<len/2; i++){
        if(islower(ch[i]) != islower(ch[len-i-1])){
            return 0;
        }
    }
    return 1;
}
int main(){
    char ch[40];
    fgets(ch,sizeof(ch),stdin);
    int n = strlen(ch);
    ch[strcspn(ch,"\n")] = '\0';
    char ch2[40];
    int num =0;
    for(int i=0; i<n; i++){
        if(ch[i] != ' '){
            ch2[num++] = ch[i];
        }
    }
    ch2[num] = '\0';
    if(isPalin(ch2)){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}