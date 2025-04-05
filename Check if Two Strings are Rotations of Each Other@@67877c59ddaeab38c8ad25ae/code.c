#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    char ch1[20];
    for(int i=0; i<(strlen(ch)/2),i++){
        char temp = ch[i];
        ch[i] = ch[strlen(ch)-1-i];
        ch[strlen(ch)-1-i] = temp;
    }
    if(strcmp(ch,ch1)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}