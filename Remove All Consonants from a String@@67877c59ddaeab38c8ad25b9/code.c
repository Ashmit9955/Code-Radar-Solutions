#include<stdio.h>
#include<string.h>
int main(){
    char ch[30];
    fgets(ch,sizeof(ch),stdin);
    int n = strlen(ch);
    // ch[n-1] = '\0';
    // n = strlen(ch);
    for(int i=0; i<n;i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'||ch[i]=='1'||ch[i] =='2'||ch[i] =='3'||ch[i] =='4'||ch[i] =='5'||ch[i] =='6'||ch[i] =='7'||ch[i] =='8'||ch[i] =='9'||ch[i] =='0'){
            printf("%c",ch[i]);
        }else if(ch[i] == ' '){
            printf(" ");
        }
    }
    return 0;
}