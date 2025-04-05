#include<stdio.h>
#include<string.h>
int main(){
    char ch[40];
    fgets(ch,sizeof(ch),stdin);
    char ch2;
    scanf("%c",&ch2);
    for(int i=0; i<strlen(ch); i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
            ch[i] = ch2;
        }else if(ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
            ch[i] = ch2;
        }
    }   
    printf("%s",ch); 
    return 0;
}