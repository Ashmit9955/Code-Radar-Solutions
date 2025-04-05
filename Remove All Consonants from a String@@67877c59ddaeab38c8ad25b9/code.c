#include<stdio.h>
#include<string.h>
int main(){
    char ch[30];
    fgets(ch,sizeof(ch),stdin);
    int n = strlen(ch);
    ch[n-1] = '\0';
    // n = strlen(ch);
    for(int i=0; i<n;i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
            printf("%c",ch[i]);
        }else if(ch[i] = " "){
            printf(" ");
        }
    }
    return 0;
}