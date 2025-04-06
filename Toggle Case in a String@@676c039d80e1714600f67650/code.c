#include<stdio.h>
#include<string.h>
int main(){
    char ch[30];
    fgets(ch,sizeof(ch) , stdin);
    ch[strcspn(ch,"\n")] = '\0'; //Replaces the \n with \0;
    int n = strlen(ch);
    for(int i=0; i<n; i++){
        if(ch[i]== ' '){
            printf(" ");
        }else if(ch[i] < 97 && ch[i]>=65){
            printf("%c",ch[i] + 32);
        }else if(ch[i] >=97 && ch[i]<=122){
            printf("%c",ch[i]-32);
        }else{
            printf("%c",ch[i]);
        }
    }
    return 0;
}