#include<stdio.h>
#include<string.h>
int Palindrome(char ch[]){
    int len = strlen(ch);
    for(int i=0 ;i<len/2; i++){
        if(ch[i] != ch[len-1-i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char ch[20];
    fgets(ch,sizeof(ch),stdin);
    if(Palindrome(ch)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}