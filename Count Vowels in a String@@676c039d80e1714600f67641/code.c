#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    fgets(ch , sizeof(ch) , stdin);
    int len = strlen(ch);
    int count = 0;
    for(int i =0; i<len; i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}